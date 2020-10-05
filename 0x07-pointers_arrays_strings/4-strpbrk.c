#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to evaluate
 * @accept: characters to be found
 * Description: look for byte in string, when found return
 * pointer from that position
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{

	while (*s)
	{
		int i = 0;

		while (accept[i])
		{
			if (*s == accept[i])
				return (s);
			i++;
		}
		s++;
	}

	return (NULL);
}
