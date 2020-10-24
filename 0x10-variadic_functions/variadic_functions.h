#ifndef __VARIADIC__H__
#define __VARIADIC__H__
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void printString(va_list pa);
void printFloat(va_list pa);
void printIntenger(va_list pa);
void printChar(va_list pa);
/**
 * struct formato - format code and functions
 * @code: format code
 * @print: function pointer to print format
 *
 * Description: data to evaluate how to print
 */
struct formato
{
	char *code;
	void (*print)(va_list);
};
typedef struct formato formato;
#endif
