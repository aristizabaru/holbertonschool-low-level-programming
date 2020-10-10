#include "holberton.h"

/**
 * main - entry point
 * @argc: count of arguments
 * @argv: value of arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int r = 0, i, j;

	/*checks every letter of string for character*/
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		r += atoi(argv[i]);
	}
	printf("%d\n", r);
	return (0);
}
