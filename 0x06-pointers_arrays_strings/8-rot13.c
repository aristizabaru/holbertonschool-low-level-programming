#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 *
 * Return: encoded string
 */
char *rot13(char *s)
{

	/*(a)lphabet, (e)ncode*/
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char e[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(s + i))
			{
				*(s + i) = e[j];
				break;
			}
		}
	}
	return (s);
}
