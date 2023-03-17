#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc -  allocates memory for an array, using malloc
 * @ptr: array
 * @old_size: size of old array
 * @new_size: size of new array
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size < old_size)
		return (NULL);

	nptr = malloc(new_size);
	if (!nptr)
		return (NULL);

	strcpy(nptr, ptr);

	if (ptr)
		free(ptr);
	return (nptr);
}
