#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int c = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		int j;

		for (j = 1; j <= size; j++)
		{
			if (j >= size - c)
				_putchar('#');
			else
				_putchar(' ');
			if (j == size)
				_putchar('\n');
		}
		c++;
	}
}
