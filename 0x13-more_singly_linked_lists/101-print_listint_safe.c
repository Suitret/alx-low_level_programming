#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: A pointer to the head of the list.
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current, *next;

	if (!head)
		exit(98);

	current = head;

	while (current)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);
		next = current->next;

		/* Check if the next node has been visited before */
		if (next && next <= current)
		{
			printf("-> [%p] %d\n", (void *)next, next->n);
			break;
		}

		current = next;
	}

	return (count);
}
