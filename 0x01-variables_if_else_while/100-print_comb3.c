#include <stdio.h>
/**
 * main - main blocm
 * Description: Numbers 00..99
 * Return: 0
 */
int main(void)
{
	int i, d, m;
	int c = 1;

	for (i = 0; i < 100; i++)
	{
		d = i / 10;
		m = i % 10;
		if (m <= 9)
		{
			m += c;
			if (m == 9)
				c++;
		}
		if (m <= 9)
		{
			putchar(d + '0');
			putchar(m + '0');

			if (i < 80)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
