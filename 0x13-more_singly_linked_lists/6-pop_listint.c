#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: given list
 * Return: void
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int temp;

	if (!ptr)
		return (0);

	temp = ptr->n;
	ptr = ptr->next;
	free(*head);
	*head = ptr;
	return (temp);
}
