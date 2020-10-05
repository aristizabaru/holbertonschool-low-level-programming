#include "holberton.h"

/**
 * _memcpy - copies memory area to another array
 * @dest: destination array to paste copy
 * @src: source array to be copied
 * @n: number of memory bytes to be copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
