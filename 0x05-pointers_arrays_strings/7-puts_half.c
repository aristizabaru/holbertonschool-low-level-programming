#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: string to print
 *
 * Description: print the second half of the string
 * Return: void
 */
void puts_half(char *str)
{
	int length, i;

	for (length = 0; str[length] != '\0'; length++)
		;

	if (length % 2 == 0)
	{
		for (i = length / 2; i < length; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (length - 1) / 2; i < length; i++)
			_putchar(str[i]);
	}

	_putchar('\n');
}
