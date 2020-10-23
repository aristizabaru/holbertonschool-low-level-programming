#include "variadic_functions.h"

/**
 * print_numbers -  prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: numberof intergers passed
 * Description: if separator is NULL doesn't print
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pa;

	if (separator == NULL)
	{
		va_end(pa);
		return;
	}
	va_start(pa, n);
	for (i = 0; i < n; i++)
	{

		printf("%d", va_arg(pa, unsigned int));
		if (i + 1 != n)
			printf("%c ", separator[0]);
	}
	printf("\n");
	va_end(pa);
}
