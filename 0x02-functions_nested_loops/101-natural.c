#include <stdio.h>

/**
 * main - adds multiples belows 1024
 * Return: void
 */
int main(void)
{
	int i = 1;
	int r = 0;

	while (i < 1024)
	{
		if (i % 3 == 0)
			r += i;
		else if (i % 5 == 0)
			r += i;
		i++;
	}
	printf("%d\n", r);

	return (0);
}
