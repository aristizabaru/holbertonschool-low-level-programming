#include "holberton.h"

/**
 * _isdigit  - checks for digits
 * @c: number to evaluate
 *
 * Description: Evaluate equivalence in ASCII
 * Return: int
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
