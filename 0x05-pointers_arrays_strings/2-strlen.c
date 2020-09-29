#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @*s: string to be evaluated
 * 
 * Return: lenght of the string
 */
int _strlen(char *s)
{
	int count = 0;
	while (*s)
	{
		s++;
		count++;
	}
	return (count);
}
