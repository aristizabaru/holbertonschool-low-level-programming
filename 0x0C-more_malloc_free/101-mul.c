#include "holberton.h"

/**
 * checkForLetters - check if there's letters in a array
 * @argv: the array to evaluate
 *
 * Return: if finds letters return 1
 * if letters are not found 0
 */
int checkForLetters(char **argv)
{
	unsigned int i, j;

	for (i = 1; i < 3; i++)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
				return (1);
			j++;
		}
	}
	return (0);
}

/**
 * displayError - display an error to stdout
 */
void displayError(void)
{
	int i;
	char *error = "Error";

	for (i = 0; error[i]; i++)
		_putchar(error[i]);
	_putchar('\n');
	exit(98);
}

/**
 * _atoi -  convert a string to an integer.
 * @s: string to convert
 *
 * Return: the first number in the string
 */
int _atoi(char *s)
{
	unsigned int res = 0;
	int resNeg = 0;
	int signo = 1;

	while (*s)
	{
		/* compruebo si hay - o + y multiplica */
		if (*s == '-')
			signo *= -1;

		/* imprime números */
		if (*s >= '0' && *s <= '9')
		{
			/* Multiplica x 10 para agregar decena */
			res = res * 10 + *s - '0';

			/* salgo del loop cuando pasa número */
			if (s[1] < '0' || s[1] > '9')
				break;
		}

		s++;
	}

	/*Según el signo cambio de un unsiged a signed int*/
	if (signo < 0)
		return (resNeg = res * signo);
	else
		return (res * signo);
}

/**
 * numberLength - gets number fo digits
 * @n: number
 *
 * Return: number of digits
 */
unsigned int numberLength(unsigned int n)
{
	unsigned int c = 1;

	while (n > 9)
	{
		n /= 10;
		c++;
	}

	return (c);
}

/**
 * numberToString - turn number into string
 * @s: pointer to memory blocks to allocate number
 * @n: number to be stored as a string
 * @length: digits of the number
 *
 * Return: number as a string
 */
char *numberToString(char *s, unsigned int n, int length)
{
	while (length >= 0)
	{
		s[length - 1] = (n % 10) + '0';
		n /= 10;
		length--;
	}
	s[length] = '\0';
	return (s);
}

/**
 * printString - prints a string
 * @str: string to print
 *
 * Return: nothing
 */
void printString(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}

/**
 * main - multiplies two numbers
 * @arc: number of arguments
 * @argv: arguments values
 *
 * Return: Always 0.
 */
int main(int arc, char **argv)
{
	char *str = NULL;
	unsigned int num1 = 0,
		num2 = 0,
		res = 0,
		lnum = 0;

	/*check number of arguments*/
	if (arc != 3)
		displayError();
	/*check for letters in arguments*/
	if (checkForLetters(argv))
		displayError();
	/*transform string to numbers*/
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	/*multiply numbers*/
	res = num1 * num2;
	/*finds lenght of number*/
	lnum = numberLength(res);
	/*allocate memory for result + null char*/
	str = malloc(sizeof(*str) * res + 1);
	/*number to string*/
	str = numberToString(str, res, lnum);
	/*print result*/
	printString(str);
	/*free memory*/
	free(str);
	return (0);
}
