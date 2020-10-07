#include "holberton.h"

/**
 * _sqrt_recursion - natural square root of a number
 * @n: number to determinate its square root
 * Description: if n does not have a natural square root,
 * the function should return -1
 *
 * Return: natural square root of a number
 * -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_compare(n, 1));
}

/**
 * _sqrt_compare - helper function to solve _sqrt_recursion
 * @n: number to determinate its square root
 * @i: incrementer to compare against n
 *
 * Return: square root if natural square root
 * -1 if it is not
 */
int _sqrt_compare(int n, int i)
{
	int square;

	/*gets squere from incrementer*/
	square = i * i;
	/*check square against given number*/
	if (square == n)
		return (i);
	else if (square < n)
		return (_sqrt_compare(n, i + 1));
	else
		return (-1);
}
