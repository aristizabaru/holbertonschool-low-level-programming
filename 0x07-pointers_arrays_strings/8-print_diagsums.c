#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums-  prints the sum of the two diagonals
 * @a: matrix
 * @size: size of the matrix
 * Description: the diagonals belongs to a square matrix of integers
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	/*(i)terator, (add)ition*/
	int i = 0, add = 0, add2 = 0, j = size - 1;

	while (i < size)
	{
		add += a[i];
		add2 += a[i + j];
		i++;
		j -= 2;
		a += size;
	}
	printf("%d, ", add);
	printf("%d\n", add2);
}
