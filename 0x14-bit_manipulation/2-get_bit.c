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
	int count = 0;

	while (n)
	{
		n >>= 1;
		count++;
	}

	return (count);
}

/**
 * get_bit - returns the bit at index
 * @n: number
 * @index: index
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int idx = max_bits(n), temp = 1;

	if (index > idx - 1)
		return (0);

	if (index == 0)
		return (n & 1);

	temp = n >> index;
	return (temp & 1);
}
