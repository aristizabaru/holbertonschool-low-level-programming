#include "holberton.h"

/**
 * _atoi -  convert a string to an integer.
 * @s: string to convert
 *
 * Return: the first number in the string
 */
int _atoi(char *s)
{
	int i, res = 0, sign = -1;

	for (i = 0; s[i] != '\0'; i++)
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
	}
	if (sign < 0)
		sign *= -1;

	return (sign);
}
