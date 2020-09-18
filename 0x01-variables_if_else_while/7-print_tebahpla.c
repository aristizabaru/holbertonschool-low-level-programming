#include <stdio.h>
/**
 * main - main block
 * Description: Prints z..a
 * Return: 0
 */
int main(void)
{
	int a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
