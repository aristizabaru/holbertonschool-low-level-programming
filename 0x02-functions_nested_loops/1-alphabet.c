#include "holberton.h"
/**
 *print_alphabet - prints alphabet in lower case
 *Return: nothing
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
