#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: number to print
 *
 * Return: nothing
 */
void print_number(int n)
{
	/*(s)signo, (r)esultado, (l)argo*/
	char s = '+';
	int r = n, l = 0, i;

	/*Guardar signo*/
	if (n < 0)
	{
		s = '-';
		n *= -1;
		r = n;
	}

	/*largo del número*/
	while (r > 9)
	{
		r /= 10;
		l++;
	}

	/*imprimir signo*/
	if (s == '-')
		_putchar('-');

	i = 0;
	char num[l];

	/*guardo números en array char*/
	while (n)
	{
		num[i] = (n % 10) + 48;
		n /= 10;
		i++;
	}

	/*imprimo números*/
	for (i = l; i >= 0; i--)
	{
		_putchar(num[i]);
	}
}
