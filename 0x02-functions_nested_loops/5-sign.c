#include "holberton.h"

/**
 * print_sign - prints sign of a number
 * @n: number to be evaluated
 *
 * Description: prints the sign of the character
 * Return: 1 if its greater than 0
 * 0 if its less than 0
 * 0 if its 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
