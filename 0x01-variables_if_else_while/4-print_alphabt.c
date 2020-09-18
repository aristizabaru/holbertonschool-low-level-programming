#include <stdio.h>
/**
 * main - main block
 * Description: Prints a..z
 * Return: 0
 */
int main(void)
{
	char abc = 'a';

	while (abc <= 'z')
	{
		if (abc != 'q' || abc != 'e')
			putchar(abc);
		abc++;
	}
	putchar('\n');
	return (0);
}
