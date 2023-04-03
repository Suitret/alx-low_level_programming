#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: given list
 * Return: size
 */

size_t print_listint(const listint_t *h)
{
	listint_t *ptr = h;
	int len = 0;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		len++;
		ptr = ptr->next;
	}
	return (len);
}
