#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - adds a new node at the end of a listint_t list
 * @head:  pointer to the head of list
 * @index: number
 * Return: adress
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int temp = 0;

	while (temp != index && head)
	{
		temp++;
		head = head->next;
	}

	if (temp == index)
		return (head);
	else
		return (NULL);
}
