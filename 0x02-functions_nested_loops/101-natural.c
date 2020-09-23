#include <stdio.h>

/**
 * main - adds multiples belows 1024
 * Return: void
 */
int main(void)
{
	int i = 0;
	int r3 = 0;
	int r5 = 0;
	int m3, m5, r;

	while (i < 1024)
	{
		/* Multiplos 3 */
		m3 = 3 * i;
		if (m3 < 1024)
			r3 += m3;
		/* Multiplos 3 */
		m5 = 5 * i;
		if (m5 < 1024)
			r5 += m5;
		i++;
	}
	r = r3 + r5;
	printf("%d\n", r);
	return (0);
}
