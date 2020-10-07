#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to be calculated
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	/*base condition*/
	if (*s == '\0')
		return (0);
	else
		return (_strlen_recursion(s + 1) + 1);
}
