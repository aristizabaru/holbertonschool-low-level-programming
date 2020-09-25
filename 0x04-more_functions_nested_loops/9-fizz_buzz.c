#include <stdio.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (es_multiplo(i, 3) == 0 && es_multiplo(i, 5) == 0)
			print_fizz(1);
		else if (es_multiplo(i, 3) == 0)
			print_fizz(3);
		else if (es_multiplo(i, 5) == 0)
			print_fizz(5);
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

/**
 * es_multiplo - find if a number is multiples of another
 * @n1: number evaluated
 * @n2: multiplicador
 *
 * Return: 0 if its true
 * 1 if its false
 */
int es_multiplo(int n1, int n2)
{
	int esMultiplo = 1;
	
	if (n1 % n2 == 0)
		esMultiplo = 0;

	return (esMultiplo);
}

/**
 * print_fizz - print string
 * @n: number of string to be printed
 *
 * Return: void
 */
void print_fizz(int n)
{
	if (n == 3)
		printf("Fizz");
	else if (n == 5)
		printf("Buzz");
	else
		printf("FizzBuzz");
}
