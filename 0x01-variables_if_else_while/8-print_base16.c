#include <stdio.h>
/**
 * main - main block
 * Description: Prints base 16 0..f
 * Return: 0
 */
int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		putchar(a + '0');
		a++;
	}

	a = 'a';

	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
