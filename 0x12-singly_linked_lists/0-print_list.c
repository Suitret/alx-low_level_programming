#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: given list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int l = 0;

	if (h == NULL)
		return (l);
	while (h)
	{
		if (h->str)
		{
			printf("[%d] %s\n", h->len, h->str);
			l++;
			h = h->next;
		}
		else
		{
			printf("[0] (nil)\n");
			l++;
			h = h->next;
		}
	}
	return (l);
}
