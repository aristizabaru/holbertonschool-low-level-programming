#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Print option according to last digit.
 * Return: 0
 */
int main(void)
{
	int n;
	int mo;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m > 5)
		printf("Last digit of %i is %i and is greater than 5\n",
		       n, mo);
	else if (m == 0)
		printf("Last digit of %i is %i and is 0\n", n, mo);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n",
		       n, mo);

	return (0);
}
