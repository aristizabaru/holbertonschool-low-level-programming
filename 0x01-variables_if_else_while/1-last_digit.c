#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description:Finds last digit and evaluates
 * its condition
 * Return: 0
 */
int main(void)
{
	int n;
	int mo;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	mo = n % 10;

	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, mo);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, mo);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n"
		       , n, mo);

	return (0);
}
