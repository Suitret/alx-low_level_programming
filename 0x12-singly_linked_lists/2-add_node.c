#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head:  pointer to the head of list
 * @str: string to duplicate
 * Return: the head of list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
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
	node->next = *head;
	*head = node;

	return (node);
}
