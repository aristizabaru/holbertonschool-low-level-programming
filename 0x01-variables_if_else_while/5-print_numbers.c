#include <stdio.h>
/**
 * main - main block
 * Description: Prints 0..9
 * Return: 0
 */
int main(void)
{
	int n = 0;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	putchar('\n');
	return (0);
}
