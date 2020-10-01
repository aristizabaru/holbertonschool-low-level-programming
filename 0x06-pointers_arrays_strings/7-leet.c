#include "holberton.h"

/**
 * leet - encodes string to Leet (or "1337")
 * @s: string to encode
 *
 * Return: encoded string
 */
char *leet(char *s)
{

	/*caracteres de compración -> (low)wer case, (upp)er case*/
	char low[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char upp[] = {'A', 'E', 'O', 'T', 'L', '\0'};

	/*caracteres de codificación -> (cod)ing character,*/
	char cod[] = {'4', '3', '0', '7', '1'};

	int i = 0, j;

	/*comparar cada caracter con comparación y cambiar to Uppercase*/
	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == low[j] || s[i] == upp[j])
				s[i] = cod[j];
		}

		i++;
	}

	return (s);
}
