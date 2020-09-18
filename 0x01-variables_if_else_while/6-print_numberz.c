#include <stdio.h>
/**
 * main - main block
 * Description: Prints 0..9
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
