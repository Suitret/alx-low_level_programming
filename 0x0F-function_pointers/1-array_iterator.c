#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates on array
 * @array: given array
 * @size: size of array
 * @action: pointer to function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action && size > 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
