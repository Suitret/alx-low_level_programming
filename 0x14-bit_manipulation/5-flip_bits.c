#include <stdio.h>
#include "main.h"

/**
 * max_bits - returns the max bits for n
 * @n: number
 * Return: integer
 */

int max_bits(unsigned long int n)
{
	int count = 0;

	while (n)
	{
		n >>= 1;
		count++;
	}

	return (count);
}

/**
 * flip_bits - returns the number of bits to flip to have n = m
 * @n: first number
 * @m: second number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int max, min, temp, cpt = 0, count = 0;

	(n > m) ? (max = n, min = m) : (max = n, min = m);
	temp = max_bits(max);

	while (cpt != temp)
	{
		if ((max & 1) != (min & 1))
			count++;
		max >>= 1;
		min >>= 1;
		cpt++;
	}

	return (count);
}
