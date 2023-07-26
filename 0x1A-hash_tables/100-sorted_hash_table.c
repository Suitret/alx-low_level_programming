#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the array
 *
 * Return: A pointer to the created hash table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - Adds an element to the sorted hash table
 * @ht: The hash table to add/update the element
 * @key: The key of the element
 * @value: The value of the element
 *
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *temp_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp_node = ht->array[index];

	while (temp_node != NULL)
	{
		if (strcmp(temp_node->key, key) == 0)
		{
			free(temp_node->value);
			temp_node->value = strdup(value);
			return (1);
		}
		temp_node = temp_node->next;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	new_node->sprev = NULL;
	new_node->snext = NULL;
	ht->array[index] = new_node;

	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else if (strcmp(key, ht->shead->key) < 0)
	{
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		temp_node = ht->shead;
		while (temp_node->snext != NULL && 
				strcmp(key, temp_node->snext->key) > 0)
			temp_node = temp_node->snext;

		new_node->snext = temp_node->snext;
		if (temp_node->snext != NULL)
			temp_node->snext->sprev = new_node;
		else
			ht->stail = new_node;

		temp_node->snext = new_node;
		new_node->sprev = temp_node;
	}

	return (1);
}

/**
 * shash_table_get - Retrieves a value associated with
 * a key in the sorted hash table
 * @ht: The hash table to retrieve the value from
 * @key: The key to search for
 *
 * Return: The value associated with the key, or NULL if the key is not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *temp_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	temp_node = ht->array[index];

	while (temp_node != NULL)
	{
		if (strcmp(temp_node->key, key) == 0)
			return (temp_node->value);
		temp_node = temp_node->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Prints the sorted hash table in ascending order
 * @ht: The hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp_node;
	int first_pair = 1;

	if (ht == NULL)
		return;

	printf("{");
	temp_node = ht->shead;

	while (temp_node != NULL)
	{
		if (!first_pair)
			printf(", ");

		printf("'%s': '%s'", temp_node->key, temp_node->value);
		first_pair = 0;
		temp_node = temp_node->snext;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - Prints the sorted hash table in descending order
 * @ht: The hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp_node;
	int first_pair = 1;

	if (ht == NULL)
		return;

	printf("{");
	temp_node = ht->stail;

	while (temp_node != NULL)
	{
		if (!first_pair)
			printf(", ");

		printf("'%s': '%s'", temp_node->key, temp_node->value);
		first_pair = 0;
		temp_node = temp_node->sprev;
	}

	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: The hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *temp_node;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			temp_node = node;
			node = node->next;
			free(temp_node->key);
			free(temp_node->value);
			free(temp_node);
		}
	}

	free(ht->array);
	free(ht);
}
