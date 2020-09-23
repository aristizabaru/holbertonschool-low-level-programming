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
	long int act = 1;
	long int res = 0;

	while (act < 4000000)
	{
		act = ant1 + act;
		ant1 = ant2;
		ant2 = act;
		if (act % 2 == 0)
			res += act;
	}
	printf("%ld\n", res);
	return (0);
}
