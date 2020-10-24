#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 * @n: nuumber of parameters
 *
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int result = 0, i;
	/*create list variable*/
	va_list pa;

	result = 0;
	if (n == 0)
		return (result);
	/*start list*/
	va_start(pa, n);
	/*process list*/
	for (i = 0; i < n; i++)
		result += va_arg(pa, unsigned int);
	/*end list*/
	va_end(pa);
	return (result);
}
