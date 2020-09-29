#include "holberton.h"

/**
 * _puts - prints a string
 * @*s: string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
