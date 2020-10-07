#include "holberton.h"

/**
 * _puts_recursion - prints a string
 * @s: string to print
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	/*base condition*/
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
		_puts_recursion(s + 1);
}
