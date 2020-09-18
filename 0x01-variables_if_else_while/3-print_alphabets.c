#include <stdio.h>
/**
 * main - main block
 * Description: Prints a..zA..Z
 * Return: 0
 */
int main(void)
{
	char abc = 'a';

	while (abc <= 'z')
	{
		putchar(abc);
		abc++;
	}
	abc = 'A';
	while (abc <= 'Z')
	{
		putchar(abc);
		abc++;
	}
	putchar('\n');
	return (0);
}
