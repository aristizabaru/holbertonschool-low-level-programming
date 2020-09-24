#include "hlberton.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: the size of the square
 *
 * Description: The diagonal should end with a \n
 * If n is 0 or less, the function should only print a \n
 * Return: void
 */
void print_square(int size)
{
	if (!(size <= 0))
	{
		int i = 1;

		while (i <= size)
		{
			int j = 0;

			while (j < size)
			{
				putchar('#');
				j++;
			}
			putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
