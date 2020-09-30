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
		/* compruebo signo */
		if (s[i] == '-')
			sign *= -1;

		if (s[i] > 47 && s[i] < 58)
		{
			/* imprime números */
			res = res * 10 + *s - '0';

			/* salgo del loop cuando pasa número */
			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
		i++;
	}

	if (sign < 0)
		res *= -1;

	return (res);
}
