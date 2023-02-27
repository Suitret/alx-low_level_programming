#include <stdio.h>

/**
 * swap_int - swaps the values of two integers.
 * @a: pointer on first integer
 * @b: pointer on second integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
