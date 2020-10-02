#include "holberton.h"

/**
 * _strncpy - copies a string to dest
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{

	/*(i)terador*/
	int i = 0;

	/*copio src a dest*/
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
