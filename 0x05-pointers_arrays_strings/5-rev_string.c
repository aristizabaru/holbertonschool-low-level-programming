#include "holberton.h"

/**
 * rev_string - prints a string, in reverse
 * @*s: string to print
 *
 * Return: void
 */
void rev_string(char *s)
{
	char str[9];
	int c = 0;

	while (c < 9)
	{
		str[c] = *(s + c);
		c++;
	}

	c = 0;
	int c2 = 8;

	while (c < 9)
	{
		*(s + c) = str[c2];
		c++;
		c2--;
	}
}

