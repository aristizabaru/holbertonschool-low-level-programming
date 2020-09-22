#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 * @val: number to be computed
 *
 * Return: number with absolute value
 */
int _abs(int val)
{
	if (val < 0)
		return (val * -1);
	else
		return (val);
}
