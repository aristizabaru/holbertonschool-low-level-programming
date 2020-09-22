#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @mod: number to evaluate
 *
 * Return: last digit
 */
int print_last_digit(int mod)
{
	int r = mod % 10;

	if (mod < 0)
	{
		r *= -1;
		_putchar('0' + r);
	}
	else
		_putchar('0' + r);
	return (r);
}
