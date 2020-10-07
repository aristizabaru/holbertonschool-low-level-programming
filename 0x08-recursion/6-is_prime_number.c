#include "holberton.h"

/**
 * is_prime_number - finds if n is a prime number
 * @n: number to be tested
 *
 * Return: 1 if the input integer is a prime number
 * otherwise return 0
 */
int is_prime_number(int n)
{
	/*entry condition*/
	if (n < 2)
		return (0);
	/*call helper function*/
	return (prime_calc(n, n - 1));
}

/**
 * prime_calc - finds prime
 * @n: number to be tested
 * @m: modulo
 * Description: takes de module and divides `n``
 * unitil it finds module 1 or not
 * Return: 1 if the input integer is a prime number
 * otherwise return 0
 */
int prime_calc(int n, int m)
{
	if (n % m != 0)
		return (prime_calc(n, m - 1));
	/*base condition*/
	if (m == 1)
		return (1);
	return (0);
}
