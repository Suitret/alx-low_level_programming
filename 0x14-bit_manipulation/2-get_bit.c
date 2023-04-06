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
 * get_bit - returns the bit at index
 * @n: number
 * @index: index
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int idx = max_bits(n), cpt = 0, temp = 1;

	if (index > idx - 1)
		return (-1);
	while (cpt != index)
	{
		temp *= 10;
		cpt++;
	}
	return (n & temp);
}
