#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of one element
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (ptr);

	for (i = 0; i < nmemb; i++)
		ptr[i * size] = 0;

	return (ptr);
}
