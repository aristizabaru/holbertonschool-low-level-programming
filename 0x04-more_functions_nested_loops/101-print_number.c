#include "holberton.h"

/**
 * print_number - Function that prints an integer.
 * @n: numbert to print
 *
 * Description: Can only use _putchar to print.
 */
void print_number(int n)
{
	if (n > 0 && n < 100)
	{
		int res2;

		res2 = (n / 10) % 10;
		_putchar(res2 + '0');
		res2 = n % 10;
		_putchar(res2 + '0');
	}
	if (n < 0)
	{
		int res1;

		n = n * -1;
		_putchar('-');
		res1 = (n / 10) % 10;
		_putchar(res1 + '0');
		res1 = n % 10;
		_putchar(res1 + '0');
	}
	if (n > 100 && n < 1000)
	{
		int res3;

		res3 = ((n / 10) / 10) % 10;
		_putchar(res3 + '0');
		res3 = (n / 10) % 10;
		_putchar(res3 + '0');
		res3 = n % 10;
		_putchar(res3 + '0');
	}
	if (n > 1000 && n < 10000)
	{
		int res4;

		res4 = (((n / 10) / 10) / 10) % 10;
		_putchar(res4 + '0');
		res4 = ((n / 10) / 10) % 10;
		_putchar(res4 + '0');
		res4 = (n / 10) % 10;
		_putchar(res4 + '0');
		res4 = n % 10;
		_putchar(res4 + '0');
	}
	if (n == 0)
	{
		_putchar(0 + '0');
	}
}
