#include "hash_tables.h"

/**
 * hash_table_delete - deletes the hash table.
 * @ht: the hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *item, *temp;
	unsigned long int i;

	if (ht && ht->array && ht->size)
	{
		for (i = 0; i < ht->size; i++)
		{
			item = ht->array[i];
			if (item)
			{
				while (item)
				{
					temp = item->next;
					free(item->key);
					free(item->value);
					free(item);
					item = temp;
				}
			}
		}
		free(ht->array);
		free(ht);
	}
}
