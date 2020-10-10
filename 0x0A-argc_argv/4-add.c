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
	int r = 0, i, c = 0;
	/*check if there's two arguments*/
	if (argc == 1)
		printf("0\n");
	else
	{
		/*check for numbers and add*/
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) != 0 || *argv[i] == '0')
				r += atoi(argv[i]);
			else
				c = 1;
		}
		/*print if there's no number*/
		if (c == 1)
		{
			printf("Error\n");
			return (c);
		}
		/*print add of r if ok*/
		printf("%d\n", r);
	}

	return (0);
}
