#include "variadic_functions.h"

/**
 * print_numbers -  prints strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: numberof strings passed
 * Description: if separator is NULL doesn't print
 * If one of the string is NULL, prints (nil)
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pa;
	char *s;

	/*check for separator*/
	if (separator == NULL)
	{
		va_end(pa);
		return;
	}
	va_start(pa, n);
	for (i = 0; i < n; i++)
	{
		/*check for null*/
		s = va_arg(pa, char *);
		printf("%s", s != NULL ? s : "(nil)");
		if (i + 1 != n)
			printf("%c ", separator[0]);
	}
	printf("\n");
	va_end(pa);
}
