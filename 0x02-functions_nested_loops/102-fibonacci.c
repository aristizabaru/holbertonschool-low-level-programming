#include <stdio.h>

/**
 * main - finubacci to 50
 * Return: 0
 */
int main(void)
{
	int i = 1;
	long int ant2 = 1;
	long int ant1 = 2;
	long int act;

	printf("1, ");
	while (i < 50)
	{
		act = ant1 + act;
		ant1 = ant2;
		ant2 = act;
		if (i != 49)
			printf("%ld, ", act);
		else
			printf("%ld", act);
		i++;
	}
	printf("\n");
	return (0);
}
