#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: given list
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	int l = 0;

	if (h == NULL)
		return (l);
	while (h)
	{
		l++;
		h = h->next;
	}
	return (l);
}
