#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: given list
 * Return: size
 */

size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
