#include <stdlib.h>
#include <stdio.h>
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

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return (ptr);
}
