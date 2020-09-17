#include <stdio.h>
/**
 * Main - Init program
 * Return: 0
 */
int main(void)
{
	char s;
	int i;
	long int li;
	long long int lli;
	float f;
	printf("Size of a char: %s byte(s)\n", sizeof(s));
	printf("Size of an int: %i byte(s)\n", sizeof(i));
	printf("Size of a long int: %i byte(s)\n", sizeof(li));
	printf("Size of a long long int: %i byte(s)\n", sizeof(lli));
	printf("Size of a float: %i byte(s)\n", sizeof(f));
}
