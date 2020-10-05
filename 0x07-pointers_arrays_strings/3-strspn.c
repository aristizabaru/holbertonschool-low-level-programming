#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: character to be found and count
 * Description: only counts if the match is consecutive
 *
 * Return: number of matches
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s)
	{
		int i = 0;
		unsigned int inCount = count;

		while (accept[i])
		{
			if (*s == accept[i])
				count++;
			i++;
		}
		if (count != 0 && inCount == count)
			break;
		s++;
	}

	return (count);
}
