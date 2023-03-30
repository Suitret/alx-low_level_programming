#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head:  pointer to the head of list
 * @str: string to duplicate
 * Return: the head of list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *p;
	char *temp;

	node = malloc(sizeof(list_t));

	if (!node)
		return (node);

	temp = strdup(str);

	if (!temp)
	{
		free(node);
		return (NULL);
	}

	node->len = strlen(str);
	node->str = temp;

	if (!head)
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
	return (node);
}
