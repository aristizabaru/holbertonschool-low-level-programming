#include "holberton.h"

/**
 * _atoi -  convert a string to an integer.
 * @s: string to convert
 *
 * Return: the first number in the string
 */
int _atoi(char *s)
{
	int i = 0, res = 0, sign = -1;

	while (*s)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] > 47 && s[i] < 58)
		{
			if (res < 0)
				res = (res * 10) - (s[i] - '0');
			else
				res = (s[i] - '0') * -1;

			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
		i++;
	}
	if (sign < 0)
		res *= -1;

	return (res);
}
