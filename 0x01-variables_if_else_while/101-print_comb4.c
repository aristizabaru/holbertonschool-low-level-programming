#include <stdio.h>
/**
 * main - entry point
 * Description: write text
 * Return: 0
 */
int main(void)
{
	int n1, n2, n3;
	int b2 = 1;
	int b3 = 2;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = b2; n2 <= 9; n2++)
		{
			for (n3 = b3; n3 <= 9; n3++)
			{
				putchar(n1 + '0');
				putchar(n2 + '0');
				putchar(n3 + '0');
				if (n1 != 7)
				{
					putchar(44);
					putchar(32);
				}
			}
			b3++;
		}
		b2++;
		b3 = b2 + 1;
	}
	putchar('\n');
	return (0);
}
