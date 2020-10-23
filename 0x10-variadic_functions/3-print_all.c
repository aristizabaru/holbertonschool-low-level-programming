#include "variadic_functions.h"

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
	unsigned int i = 0;
	char *string = NULL;
	int print;
	/*start list*/
	va_start(pa, format);
	/*check arguments and print*/
	while (*(format + i))
	{
		print = 1;
		switch (*(format + i))
		{
		case 'c':
			printf("%c", va_arg(pa, int));
			break;
		case 'i':
			printf("%d", va_arg(pa, int));
			break;
		case 'f':
			printf("%f", va_arg(pa, double));
			break;
		case 's':
			string = va_arg(pa, char *);
			if (string == NULL)
			{
				printf("%s", "(nil)");
				break;
			}
			printf("%s", string);
			break;
		default:
			print = 0;
		}
		/*check conditions to print ,*/
		if (*(format + (i + 1)) != '\0' && print)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(pa);
}
