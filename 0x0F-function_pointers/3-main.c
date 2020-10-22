#include "3-calc.h"

/**
 * main - print resulto of math operation
 * @argc: arguments count
 * @argv: array of arguments values
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	/*check arguments count*/
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/*check operator*/
	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	/*check division and modulo*/
	if ((argv[2] == '/' && num2 == 0) ||
	    (argv[2] == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	/*call fuction*/
	printf("%d\n", get_op_func(argv[2])(num1, num2));

	return (0);
}

