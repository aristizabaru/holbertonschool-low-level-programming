#include "holberton.h"

/**
 * _isupper - checks for uppercase
 * @c: number to evaluate
 *
 * Description: Evaluate equivalence in ASCII
 * Return: int
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
