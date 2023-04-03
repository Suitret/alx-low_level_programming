#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head:  pointer to the head of list
 * @n: number
 * Return: the head of list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *p;

	node = malloc(sizeof(listint_t));

	if (!node)
		return (node);

	node->n = n;

	if (!*head)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	p = *head;

	while (p->next)
	{
		p = p->next;
	}

	p->next = node;
	node->next = NULL;
	return (node);
}
