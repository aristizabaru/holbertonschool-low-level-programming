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
	int modulo;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	modulo = n % 10;

	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, modulo);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, modulo);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, modulo);

	return (0);
}
