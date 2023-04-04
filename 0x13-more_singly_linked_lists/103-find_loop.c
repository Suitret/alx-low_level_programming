#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * find_listint_loop - finds a loop in listint_t linked list.
 * @head: A pointer to the head of the list.
 * Return: adress of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *prt1 = head, *ptr2 = head;

	while (ptr2 != NULL && ptr2->next != NULL)
	{
		ptr1 = ptr1->next;
		ptr2 = ptr2->next->next;

		if (ptr1 == ptr2)
			break;
	}

	ptr1 = head;

	while (ptr1->next != ptr2->next)
	{
		ptr1 = ptr1->next;
		ptr2 = ptr2->next;
	}

	ptr2->next = NULL;
	return (ptr1->next);
}
