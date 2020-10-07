#include "holberton.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to return its factorial
 * Description: If n is lower than 0, the function
 * should return -1
 *
 * Return: factorial
 * error if n is -1
 */
int factorial(int n)
{
	/*entry condition*/
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	/*base condition*/
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
