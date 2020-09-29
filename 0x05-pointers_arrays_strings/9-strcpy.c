#include "holberton.h"

/**
 * _strcpy -  copies a string into another
 * @dest: destination of the string copied
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*src)
	{
		*(dest + i) = *src;
		i++;
		src++;
	}

	return (dest);
}
