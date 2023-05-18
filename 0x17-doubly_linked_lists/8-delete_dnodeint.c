#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at the given index
 * @head: pointer to the head of the list
 * @index: index
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
    unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	for (i = 0; i < index && current != NULL; i++)
		current = current->next;

	if (current == NULL)
        return (-1);

	if (current == *head)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		current->prev->next = current->next;
		if (current->next != NULL)
			current->next->prev = current->prev;
	}

	free(current);

	return (1);
}
