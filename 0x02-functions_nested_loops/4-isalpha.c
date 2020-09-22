#include "holberton.h"

/**
 * _isalpha - check if character is a letter
 * @c: the character to evaluate
 *
 *Return: 1 if it's a letter
 * 0 if it's something else
 */
int _isalpha(int c)
{
	if (c > 65 && c < 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
