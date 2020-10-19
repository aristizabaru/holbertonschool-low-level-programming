#ifndef _DOG
#define _DOG
#include <stdlib.h>
#include <stdio.h>
/**
 * struct dog - dog's data
 * @name: dog's name
 * @age: dpg's age with decimals
 * @owner: dog's owner
 *
 * Description: Dog's personal data
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
