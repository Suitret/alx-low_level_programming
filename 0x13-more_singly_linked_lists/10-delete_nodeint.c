#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - inserts a new node at the idx position of the list
 * @head:  pointer to the head of list
 * @index: index
 * Return: integer
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int temp = 0;
	listint_t *ptr1 = *head, *ptr2;

	while (temp != index && ptr1)
	{
		temp++;
		ptr1 = ptr1->next;
	}

	if (!ptr1)
		return (-1);

	ptr2 = ptr1->next;

	if (temp == 0)
	{
		free(ptr1);
		*head = ptr2;
		return (1);
	}

	ptr1 = *head;
	temp = 0;

	while (temp != index - 1)
	{
		temp++;
		ptr1 = ptr1->next;
	}

	free(ptr1->next);
	ptr1->next = ptr2;
	return (1);
}
