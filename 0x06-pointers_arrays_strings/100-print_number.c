#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: number to print
 *
 * Return: nothing
 */
void print_number(int n)
{

	/*(s)signo, (r)esultado*/
	char s = '+';
	int r;

	/*Guardar signo*/
	if (n < 0)
	{
		s = '-';
		n *= -1;
		r = n;
	}

	/*imprimir signo*/
	if (s == '-')
		_putchar('-');

	/*rompe recursion*/
	if (n == 0)
	{
		return;
	}

	/*extraer último digito*/
	r = n % 10;

	print_number(n / 10);

	/*print r*/
	_putchar(r + 48);
}
