#include "holberton.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	/*base condition*/
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	/*On hold until base contion is met*/
	_putchar(*s);
}
