#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at the idx position of the list
 * @head:  pointer to the head of list
 * @idx: index
 * @n: number
 * Return: adress
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int temp = 0;
	listint_t *ptr = *head, *node;

	while (temp != idx && ptr)
	{
		temp++;
		ptr = ptr->next;
	}

	if (!ptr)
		return (ptr);

	node = malloc(sizeof(listint_t));

	if (!node)
		return (node);

	node->n = n;
	node->next = ptr;

	if (temp == 0)
	{
		*head = node;
		return (node);
	}

	ptr = *head;

	while (temp != idx - 1)
	{
		temp++;
		ptr = ptr->next;
	}

	ptr->next = node;
	return (node);
}
