#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of elements
 * @head: given list
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
