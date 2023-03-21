#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: First member
 * @age: Second member
 * @owner: third member
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr = (dog_t *)malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (NULL);

	ptr->name = malloc(strlen(name) + 1);
	ptr->owner = malloc(strlen(owner) + 1);

	if (ptr->name == NULL || ptr->owner == NULL)
	{
		free(ptr);
		return (NULL);
	}

	strcpy(ptr->name, name);
	ptr->age = age;
	strcpy(ptr->owner, owner);

	return (ptr);
}
