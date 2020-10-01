#include "holberton.h"

/**
 * cap_string - capitalizes all words
 * @s: string
 *
 * Return: uppercase string
 */
char *cap_string(char *s)
{

	/*caracteres de comparación*/
	char com[] = {' ', '\t', '\n', ',', ';', '.', '!',
		      '?', '"', '(', ')', '{', '}', '\0'};
	int i = 0, j;

	/*comparar cada caracter con comparación y cambiar to Uppercase*/
	while (s[i] != '\0')
	{
		for (j = 0; j < 14; j++)
		{
			if (s[i] == com[j] && (s[i + 1] > 96 && s[i + 1] < 123))
				s[i + 1] = s[i + 1] - 32;
		}

		i++;
	}

	return (s);
}
