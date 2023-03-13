#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: character to use
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	int i;

	if (size <= 0)
		return (NULL);

	p = (char *)malloc(size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
