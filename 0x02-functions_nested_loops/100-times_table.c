#include "holberton.h"

/**
 * print_times_table - print times table
 * @n: the number for the times table
 *
 * Description: prints times table of any given number
 * Return: void
 */
void print_times_table(int n)
{
	int l, b;
	int e = 0;

	if (!(n > 15 || n < 0))
	{
		for (l = 0; l < n + 1; l++)
		{
			for (b = 0; b < n + 1; b++)
			{
				check(&b, &e, &n);
			}
			_putchar('\n');
			e++;
		}
	}
}

/**
 * check - check condition of table
 * @b: base number
 * @e: exponente
 * @n: given number
 *
 * Return: void
 */
void check(int *b, int *e, int *n)
{
	int r, fd, md, ld;

	r = *b * *e;
	if (r == 0 && *b == 0)
		_putchar(r + '0');
	else
		_putchar(' ');
	if (r < 10 && *b != 0)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(r + '0');
	}
	else if (r > 9 && r < 100 && *b != 0)
	{
		fd = firstDigit(r);
		ld = lastDigit(r);
		_putchar(' ');
		_putchar(fd + '0');
		_putchar(ld + '0');
	}
	else if (r > 99)
	{
		fd = firstDigit(r);
		md = middleDigit(r);
		ld = lastDigit(r);
		_putchar(fd + '0');
		_putchar(md + '0');
		_putchar(ld + '0');
	}
	if (*b != *n)
		_putchar(',');
}

/**
 * firstDigit - return first digit of a number
 * @n: number to evaluate
 *
 * Return: first digit
 */
int firstDigit(int n)
{
	while (n >= 10)
		n /= 10;
	return (n);
}

/**
 * middleDigit - return middle digit of a number
 * @n: number to evaluate
 *
 * Return: middle digit
 */
int middleDigit(int n)
{
	return ((n / 10) % 10);
}

/**
 * lastDigit - return last digit of a number
 * @n: number to evaluate
 *
 * Return: last digit
 */
int lastDigit(int n)
{
	return (n % 10);
}
