#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at the idx position
 * @head:  pointer to the head of list
 * @x: index
 * @n: number
 * Return: adress
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int x, int n)
{
	unsigned int i = 0;
	dlistint_t *current, *new_node;

	if (head == NULL && x != 0)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (new_node);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (x == 0 || *head == NULL)
	{
		new_node->next = *head;
		if (*head != NULL)
			(*head)->prev = new_node;
		*head = new_node;
		return (new_node);
	}

	current = *head;
	for (i = 0; i < x - 1; i++)
		current = current->next;

	if (i != x - 1)
	{
		free(new_node);
		return (NULL);
	}

	new_node->prev = current;
	new_node->next = current->next;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}
