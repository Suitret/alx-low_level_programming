#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: given list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		if (temp->str)
			free(temp->str);
		head = head->next;
		free(temp);
	}
}
