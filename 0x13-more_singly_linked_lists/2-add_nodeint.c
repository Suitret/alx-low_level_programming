#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head:  pointer to the head of list
 * @n: number
 * Return: the head of list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (!node)
		return (node);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
