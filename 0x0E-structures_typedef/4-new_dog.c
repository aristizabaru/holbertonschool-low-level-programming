#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *yourDog = NULL;
	/*Allocate memory for new structure*/
	yourDog = malloc(sizeof(dog_t));
	if (yourDog == NULL)
		return (NULL);
	/*assign new data to members*/
	*(yourDog) = (dog_t){name, age, owner};
	return (yourDog);
}
