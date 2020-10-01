#include "holberton.h"

/**
 * reverse_array -  reverses the content of an array
 * @a: string 1
 * @n: number of elements of the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	/*(num)ber, (i)terador*/
	int num = 0, i = 0;

	/*Recorro array*/
	while (i < n)
	{
		/*invertir valores en extremos*/
		num = *(a + i);
		*(a + i) = *(a + n - 1);
		*(a + n - 1) = num;
		i++;
		n--;
	}
}
