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
	size_t nbytes = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nbytes);

	if (ptr == NULL)
		return (ptr);

	memset(ptr, 0, nbytes);

	return (ptr);
}
