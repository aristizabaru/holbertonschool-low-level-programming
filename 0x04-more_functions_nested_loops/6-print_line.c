#include "holberton.h"

/**
 * print_line - draws a straight lin
 * @n: number of times the character _
 *
 * Description: if n is 0 or less, the function should only print \n
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
