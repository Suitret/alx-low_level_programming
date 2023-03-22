#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - iterates on array
 * @array: given array
 * @size: size of array
 * @cmp: pointer to function
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, temp;

	if (size <= 0 || !array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
