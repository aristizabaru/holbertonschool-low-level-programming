#include "holberton.h"

/**
 * main - entry point
 * @argc: count of arguments
 * @argv: value of arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
