#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 * @h: given list
 * Return: size
 */

size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
