#include "holberton.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int c = 0, j = 0;

	while (*s)
	{
		s++;
		c++;
	}

	for (j = c; j >= 0; j--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
