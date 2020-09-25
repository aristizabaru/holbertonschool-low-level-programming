#include <stdio.h>

long int next_primo(long int num);
int check_primo(long int num);

long int next_primo(long int num)
{
	long int primo = 0;
	int i = 1;

	while (primo == 0)
	{
		if (check_primo(num + i))
			primo = num + i;
		i++;
	}
	return (primo);
}

int check_primo(long int num)
{
	int i = 2;
	while (i <= num / 2)
	{
		if (num % i == 0)
			return (0);
		else
			i++;
	}
	return (1);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int primo = 2;
	long num = 612852475143;
	int i = 0;

	while (i < 10000)
	{
		if (num % primo == 0)
			num = num / primo;
		else
		{
			if (!(num == 1))
				primo = next_primo(primo);
		}
		i++;
	}
	printf("%ld\n", primo);
	return (0);
}
