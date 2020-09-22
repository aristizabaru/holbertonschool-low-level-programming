#include "holberton.h"

/**
 *_islower - check if char is lowercase
 * @c: character to evaluate
 * Return: 1 if is lower case
 * 2 if it is not
 */
int _islower(int c)
{
	if (c > 96 && c < 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
