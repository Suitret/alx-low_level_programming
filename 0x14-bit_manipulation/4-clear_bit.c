#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the bit at index at 0
 * @n: number
 * @index: index
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int cpt = 0, temp = 1;

	if (!n)
		return (-1);

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	if (index == 0)
	{
		*n = (*n) & 0;
		return (1);
	}

	while (cpt != index)
	{
		temp *= 2;
		cpt++;
	}

	*n = (*n) & (~temp);
	return (1);
}
