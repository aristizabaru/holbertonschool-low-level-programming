#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @s: string
 *
 * Return: uppercase string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] > 'Z')
			s[i] = s[i] - 32;
		i++;
	}

	return (s);
}
