#include <stdio.h>
/**
 * main - main blocm
 * Description: Numbers 00..99
 * Return: 0
 */
int main(void)
{
	int i, d, m;

	for (i = 0; i < 100; i++)
	{
		d = i / 10;
		m = i % 10;

		putchar(d + '0');
		putchar(m + '0');

		if (i < 99)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
