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
	int num1 = 0, num2 = 0;

	/*store numbers*/
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	/*checks*/
	/*wrong number of arguments*/
	if (argc != 4)
	{
		printf("ERROR\n");
		exit(98);
	}
	/*wrong operator*/
	/*check with get_op_func if it gets back NULL*/
	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("ERROR\n");
		exit(99);
	}
	/*check if users try to / or % by 0*/
	/*target the first character of string for comparation*/
	if (num2 == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("ERROR\n");
		exit(100);
	}

	/*send string and get back address of function*/
	printf("%d\n", get_op_func(argv[2])(num1, num2));
	return (0);
}

