#ifndef _DOG_H_
#define _DOG_H_

/*
 * dog_t - typedef of struct dog
 */

typedef struct dog dog_t;

/**
 * struct dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: third member
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
