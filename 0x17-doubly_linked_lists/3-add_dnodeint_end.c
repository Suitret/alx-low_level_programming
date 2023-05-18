#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head:  pointer to the head of list
 * @n: number
 * Return: the head of list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *p;

	node = malloc(sizeof(dlistint_t));

	if (!node)
		return (node);

	node->n = n;

	if (!*head)
	{
		node->next = *head;
		node->prev = NULL;
		*head = node;
		return (node);
	}

	p = *head;

	while (p->next)
	{
		p = p->next;
	}

	node->prev = p;
	p->next = node;
	node->next = NULL;
	return (node);
}
