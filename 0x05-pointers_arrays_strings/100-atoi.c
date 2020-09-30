#include "holberton.h"

/**
 * _atoi -  convert a string to an integer.
 * @s: string to convert
 *
 * Return: the first number in the string
 */
int _atoi(char *s)
{
	unsigned int res = 0;
	int resNeg = 0;
	int signo = 1;

	while (*s)
	{
		/* compruebo si hay - o + y multiplica */
		if (*s == '-')
			signo *= -1;

		/* imprime números */
		if (*s >= '0' && *s <= '9')
		{
			/* Multiplica x 10 para agregar decena */
			res = res * 10 + *s - '0';

			/* salgo del loop cuando pasa número */
			if (s[1] < '0' || s[1] > '9')
				break;
		}

		s++;
	}

/*Según el signo cambio de un unsiged a signed int*/
	if (signo < 0)
		return (resNeg = res * signo);
	else
		return (res * signo);
}
