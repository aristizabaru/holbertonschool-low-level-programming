#include "variadic_functions.h"

/**
 * printIntenger - print an interger
 * @pa: argument to print
 *
 * Return: nothing
 */
void printIntenger(va_list pa)
{
	printf("%d", va_arg(pa, int));
}

/**
 * printFloat -  prints a float
 * @pa: argument to print
 *
 * Return: nothing
 */
void printFloat(va_list pa)
{
	printf("%f", va_arg(pa, double));
}

/**
 * printString -  print a string
 * @pa: argument to print
 *
 * Return: nothing
 */
void printString(va_list pa)
{
	char *string = va_arg(pa, char *);

	if (string == NULL)
	{
		printf("%s", "(nil)");
		return;
	}
	printf("%s", string);
}

/**
 * print_all -  prints anything
 * @format: options of formating
 * Description: if the string is NULL prints (nil)
 * if no option found does nothing
 *
 * Return: nothing
 */
void print_all(const char *const format, ...)
{
	va_list pa;
	/*create array of formats (code + function)*/
	formato formato[] = {{'c', printChar},
			     {'i', printIntenger},
			     {'f', printFloat},
			     {'s', printString}};
	unsigned int i = 0, j;

	/*start list*/
	va_start(pa, format);
	/*check arguments and print*/
	while (*(format + i))
	{
		j = 0;
		while (j < 4)
		{
			if (formato[j].code == *(format + i))
			{
				formato[j].print(pa);
				/*check conditions to print ,*/
				if (*(format + (i + 1)) != '\0')
					printf(", ");
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(pa);
}
