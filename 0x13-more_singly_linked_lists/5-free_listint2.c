#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: given list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = *head, *ptr;

	*head = NULL;

	while (temp)
	{
		ptr = temp;
		temp = temp->next;
		free(ptr);
	}
}
