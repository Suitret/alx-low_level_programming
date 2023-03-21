#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a new dog.
 * @d: argument
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
		free(d);
	else
		exit(0);
}
