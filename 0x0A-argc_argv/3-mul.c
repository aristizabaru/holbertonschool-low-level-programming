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
	int r;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		r = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", r);
	}

	return (0);
}
