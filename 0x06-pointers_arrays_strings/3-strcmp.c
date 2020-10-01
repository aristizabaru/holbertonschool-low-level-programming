#include "holberton.h"

/**
 * _strcmp -  compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: dif between s1 and s2
 */
int _strcmp(char *s1, char *s2)
{

	/*(i)terador, (r)esultado*/
	int i = 0, r = 0;

	/*comparo strings*/
	while (*(s1 + i) != '\0')
	{
		if (*(s1 + i) < *(s2 + i))
		{
			r = *(s1 + i) - *(s2 + i);
			break;
		}
		else if (*(s1 + i) > *(s2 + i))
		{
			r = *(s1 + i) - *(s2 + i);
			break;
		}

		i++;
	}

	return (r);
}
