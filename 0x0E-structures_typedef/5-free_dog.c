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
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);

		free(d);
	}
	else
		exit(0);
}
