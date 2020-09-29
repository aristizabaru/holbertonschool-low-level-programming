#include "holberton.h"

/**
 * rev_string - prints a string, in reverse
 * @s: string to print
 *
 * Return: void
 */
void rev_string(char *s)
{
	char letra;
	int lenght, i = 0;

	for (lenght = 0; s[lenght] != '\0'; lenght++)
		;

	while (i < lenght)
	{
		letra = *(s + i);
		*(s + i) = *(s + lenght - 1);
		*(s + lenght - 1) = letra;
		i++;
		lenght--;
	}
}

