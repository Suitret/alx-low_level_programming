#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range -  allocates memory for an array, using malloc
 * @min: minimum value
 * @max: maximum value
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int lenght = max - min + 1, *ptr, i;

	if (min > max)
		return (NULL);

	ptr = malloc(lenght * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < lenght; i++)
		ptr[i] = min + i;

	return (ptr);
}
