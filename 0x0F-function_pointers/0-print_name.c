#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: string of a name
 * @f: pointer to function with char * as argument
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
