#include "dog.h"

/**
 * getLength - get length of a string
 * @s: string
 *
 * Return: number of characters without \0
 */
unsigned int getLength(char *s)
{
	unsigned int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * copyString - copy one string into another
 * @s1: string to be copied
 * @s2: copy of s1
 *
 * Return: nothing
 */
void copyString(char *s1, char *s2)
{
	unsigned int i = 0;

	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
}

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
	char *newName = NULL, *newOwner = NULL;

	/*make copy of name*/
	newName = malloc(sizeof(*newName) * getLength(name) + 1);
	if (newName == NULL)
		return (NULL);
	copyString(name, newName);
	/*make copy of owner*/
	newOwner = malloc(sizeof(*newOwner) * getLength(owner) + 1);
	if (newOwner == NULL)
		return (NULL);
	copyString(owner, newOwner);

	/*Allocate memory for new structure*/
	yourDog = malloc(sizeof(dog_t));
	if (yourDog == NULL)
		return (NULL);
	/*assign new data to members*/
	yourDog->name = newName;
	yourDog->age = age;
	yourDog->owner = newOwner;
	return (yourDog);
}
