#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @head: given list
 * Return: void
 */

size_t free_listint_safe(listint_t **head)
{
	listint_t *temp = *head, *ptr;
	size_t count = 0;

	while (temp)
	{
		count++;
		ptr = temp;
		temp = temp->next;
		free(ptr);
	}

	return (count);
}
