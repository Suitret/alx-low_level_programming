#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @key:  the key
 * @value: the value
 * @ht: the hash table
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *item, *current_item;

	if (!ht || !ht->array)
		return (0);

	item = create_item(key, value);
	if (item)
	{
		index = key_index(key, ht->size);
		current_item = ht->array[index];

		if (current_item)
		{
			item->next = current_item;
			ht->array[index] = item;
			return (1);
		}
		ht->array[index] = item;
		return (1);
	}

	return (0);
}

/**
 * create_item - creates a new item for hash table
 * @key:  the key
 * @value: the value
 * Return: the new node item
 */
hash_node_t *create_item(char *key, char *value)
{
	hash_node_t *item = malloc(sizeof(hash_node_t));

	if (!item)
		return (NULL);

	item->key = malloc(strlen(key) + 1);
	if (!item->key)
	{
		free(item);
		return (NULL);
	}

	item->value = malloc(strlen(value) + 1);
	if (!item->value)
	{
		free(item->key), free(item);
		return (NULL);
	}

	strcpy(item->key, key);
	strcpy(item->value, value);
	item->next = NULL;
	return (item);
}