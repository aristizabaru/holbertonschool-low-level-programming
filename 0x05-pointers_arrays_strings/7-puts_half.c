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

	for (i = length / 2; i <= length; i++)
		_putchar(str[i]);

	_putchar('\n');
}