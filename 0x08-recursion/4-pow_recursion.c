#include "holberton.h"

/**
 * _pow_recursion - value of x raised to the power of y
 * @x: number 1
 * @y: number 2
 * Description: if y is lower than 0, the function
 * should return -1
 *
 * Return: x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	/*entry condition*/
	if (y < 0)
		return (-1);
	/*base condition*/
	if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}
