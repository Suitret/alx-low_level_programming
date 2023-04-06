#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * max_bits - returns the max bits for n
 * @n: number
 * Return: integer
 */

int max_bits(unsigned long int n)
{
	if (n)
		return (log2(n) + 1);
	else
		return (1);
}

/**
 * set_bit - sets the bit at index at 1
 * @n: number
 * @index: index
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int idx = max_bits(*n), cpt = 0, temp = 1;

	if (index > idx - 1)
		return (-1);

	if (index == 0)
	{
		*n = (*n) | 1;
		return (1);
	}

	while (cpt != index)
	{
		temp *= 2;
		cpt++;
	}

	*n = (*n) | temp;
	return (1);
}
