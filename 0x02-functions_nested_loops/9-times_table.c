#include "holberton.h"

/**
 * times_table - prints 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int l, b, r, fd, ld;
	int e = 0;

	for (l = 0; l < 10; l++)
	{
		for (b = 0; b < 10; b++)
		{
			r = b * e;
			_putchar(' ');
			if (r < 10)
			{
				_putchar(' ');
				_putchar(r + '0');
			}
			else
			{
				fd = firstDigit(r);
				ld = lastDigit(r);
				_putchar(fd + '0');
				_putchar(ld + '0');
			}
			if (b != 9)
				_putchar(',');
		}
		_putchar('\n');
		e++;
	}
}

/**
 * firstDigit - returns first digit of number
 * @n: number to get first digit
 *
 * Return: first digit of n
 */
int firstDigit(int n)
{
	while (n >= 10)
		n /= 10;
	return (n);
}

/**
 * lastDigit - returns last digit of number
 * @n: number to get last digit
 *
 * Return: last digit of n
 */
int lastDigit(int n)
{
	return (n % 10);
}
