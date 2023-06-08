#include "hash_tables.h"

/**
 * hash_table_get - retrieves an element from the hash table.
 * @key:  the key
 * @ht: the hash table
 * Return: the value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *item;

	if (!ht || !ht->array)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	item = ht->array[index];

	if (item)
	{
		while (item)
		{
			if (strcmp(item->key, key) == 0)
				return (item->value);
			item = item->next;
		}
	}
	return (NULL);
}
