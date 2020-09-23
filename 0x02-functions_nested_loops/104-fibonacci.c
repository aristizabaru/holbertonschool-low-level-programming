#include <stdio.h>

/**
 * main - finubacci to 98
 * Return: 0
 */
int main(void)
{
	int i = 1;
	unsigned int ant2 = 1;
	unsigned int ant1 = 2;
	unsigned int act;

	printf("1, ");
	while (i < 99)
	{
		act = ant1 + act;
		ant1 = ant2;
		ant2 = act;
		if (i != 98)
			printf("%u, ", act);
		else
			printf("%u", act);
		i++;
	}
	printf("\n");
	return (0);
}
