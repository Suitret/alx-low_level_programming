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

	if (!ht || !ht->array || !key || strcmp(key, "") == 0)
		return (0);

	item = create_item(key, value);
	if (item)
	{
		index = key_index((const unsigned char *)key, ht->size);
		current_item = ht->array[index];

		if (current_item)
			item->next = current_item;
		else
			item->next = NULL;
		
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
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *item;

	if (!value)
		return (NULL);

	item = malloc(sizeof(hash_node_t));
	if (!item)
		return (NULL);

	item->key = strdup(key);
	if (!item->key)
	{
		free(item);
		return (NULL);
	}

	item->value = strdup(value);
	if (!item->value)
	{
		free(item->key), free(item);
		return (NULL);
	}

	item->next = NULL;
	return (item);
}
