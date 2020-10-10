#include "holberton.h"

/**
 * main - entry point
 * @argc: count of arguments
 * @argv: value of arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char **argv __attribute__((unused)))
{
	argc--;
	printf("%d\n", argc);

	return (0);
}
