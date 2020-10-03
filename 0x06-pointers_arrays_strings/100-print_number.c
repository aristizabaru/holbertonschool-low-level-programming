#include "holberton.h"

/**
 * print_number - print number
 * @n: number to print
 *
 * Description: calculates lenght and sign
 * sends number to print
 * Return: nothing
 */
void print_number(int n)
{
	/*(s)signo, (r)esultado, (l)argo*/
	char s = '+';
	int l = 0;
	unsigned int r;

	/*Guardar signo*/
	if (n < 0)
	{
		s = '-';
		n *= -1;
		r = n;
	}
	r = n;

	/*largo del número*/
	while (r > 9)
	{
		r /= 10;
		l++;
	}

	/*imprimir signo*/
	if (s == '-')
		_putchar('-');

	/*imprimir número*/
	print(l, n);
}

/**
 * print - print number
 * @l: lenght of the number
 * @n: number to print
 *
 * Description: makes calculations and print
 * number from back to the beggining
 * Return: nothing
 */
void print(int l, int n)
{
	int i = 0, j, k = 1, maxL = l;
	unsigned int r;

	while (i < l)
	{
		j = 0;
		r = n;
		if (l == maxL)
		{
			while (r > 9)
				r /= 10;
			_putchar(r + 48);
		}
		else
		{
			while (j < maxL - k)
			{
				r /= 10;
				j++;
			}
			_putchar(r % 10 + 48);
			k++;
		}
		l--;
	}
	r = n;
	_putchar(r % 10 + 48);
}

