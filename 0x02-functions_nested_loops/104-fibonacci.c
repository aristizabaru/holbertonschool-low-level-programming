#include <stdio.h>

/**
 * main - finubacci to 98
 * Return: 0
 */
int main(void)
{
	int i = 1;
	long double ant2 = 1;
	long double ant1 = 2;
	long double act;

	printf("1, ");
	while (i < 99)
	{
		act = ant1 + act;
		ant1 = ant2;
		ant2 = act;
		if (i != 98)
			printf("%.0Lf, ", act);
		else
			printf("%.0Lf", act);
		i++;
	}
	printf("\n");
	return (0);
}
