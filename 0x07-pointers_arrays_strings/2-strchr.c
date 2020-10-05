#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @s: string to evaluate
 * @c: character to be found
 *
 * Return: pointer to first occurrence of the character
 * - return null if nothing is found
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	/*check null character*/
	if (*(s + 1) == c)
		return (s + 1);

	return (NULL);
}
