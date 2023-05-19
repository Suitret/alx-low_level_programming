#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head:  pointer to the head of list
 * @n: number
 * Return: the head of list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));

	if (!node)
		return (node);

	node->n = n;
	node->next = *head;
	node->prev = NULL;
	*head = node;
	if (node->next)
		(node->next)->prev = node;

	return (node);
}
