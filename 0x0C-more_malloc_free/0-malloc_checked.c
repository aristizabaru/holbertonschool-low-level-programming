#include "holberton.h"

/**
 * malloc_checked - allocates memory
 * @b: bytes to allocate
 *
 * Return: void pointer
 * if fails termination process exit(98)
 */
void *malloc_checked(unsigned int b)
{
	void *p = NULL;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
