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

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
