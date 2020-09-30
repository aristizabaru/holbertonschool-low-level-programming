#include "holberton.h"

/**
 * _atoi -  convert a string to an integer.
 * @s: string to convert
 *
 * Return: the first number in the string
 */
int _atoi(char *s)
{
	int res = 0, signo = 1, i = 0;
	while ((*(s + i) < '0' || *(s + i) > '9') && (*(s + i) != '\0'))
	{
		if (*(s + i) == '-')
			signo *= -1;
		i++;
	}

	while (*s)
	{

		/* imprime números */
		if (*s >= '0' && *s <= '9')
		{
			/* Multiplica x 10 para agregar decena */
			res = res * 10 + *s - '0';
		}

		/* salgo del loop cuando pasa número */
		if (!(s[1] >= '0' && s[1] <= '9') && (s[0] >= '0' && s[0] <= '9'))
			break;
		s++;
	}
	return (res * signo);
}
