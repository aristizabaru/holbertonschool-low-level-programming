#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \
 *
 * Description: The diagonal should end with a \n
 * If n is 0 or less, the function should only print a \n
 * Return: void
 */
void print_diagonal(int n)
{
	if (!(n <= 0))
	{
		int i = 0;

		while (i < n)
		{
			int j = 0;

			while (j <= i)
			{

				if (j == i)
					_putchar(92);
				else
					_putchar(' ');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
