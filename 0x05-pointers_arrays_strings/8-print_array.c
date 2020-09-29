#include "holberton.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of integers
 * @a: array to be printed
 * @n: number of elements of the array to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (a[i] != a[n - 1])
			printf(", ");
	}
	printf("\n");
}
