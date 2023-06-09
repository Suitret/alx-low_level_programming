#include "hash_tables.h"

/**
 * hash_table_print - prints the elements of the hash table.
 * @ht: the hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *item;
	unsigned long int i, flag = 1;

	if (!ht)
		return;
	else if (!ht->array || !ht->size)
		printf("{}\n");
	else
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			item = ht->array[i];
			if (item)
			{
				while (item)
				{
					if (!flag)
						printf(", ");
					printf("'%s': '%s'", item->key, item->value);
					item = item->next;
					flag = 0;
				}
			}
		}
		printf("}\n");
	}
}
