#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * get_bit - returns the bit at index
 * @n: number
 * @index: index
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	if (index == 0)
		return (n & 1);

	temp = n >> index;
	return (temp & 1);
}
