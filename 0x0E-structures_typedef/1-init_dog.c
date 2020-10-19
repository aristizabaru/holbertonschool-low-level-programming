#include "dog.h"

/**
 * init_dog - initialice dog structure
 * @d: pointer to dog structure
 * @name:  Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	*d = (struct dog){.name = name, .age = age, .owner = owner};
}
