#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i = 1;

	while (i <= 10)
	{
		int j = 0;

		while (j <= 14)
		{
			int n1;
			int n2;

			if (j < 10)
				_putchar(j + '0');
			else
			{
				n1 = j / 10;
				n2 = j % 10;
				_putchar(n1 + '0');
				_putchar(n2 + '0');
			}
			j++;
		}
		i++;
		_putchar('\n');
	}
}
