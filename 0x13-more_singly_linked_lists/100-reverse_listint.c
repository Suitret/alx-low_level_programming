#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses the list
 * @head:  pointer to the head of list
 * Return: adress
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head, *prev = NULL;

	while (current)
	{
		current = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = current;
	}

	*head = prev;
	return (prev);
}
