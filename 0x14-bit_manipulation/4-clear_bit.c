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
	if (!n || index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
