#include "holberton.h"

/**
 * create_array - allocate memory to an array
 * @size: size of the array
 * @c: element to fill the array with
 *
 * Return: NULL if size 0
 * a pointer to an array or NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	char *p = NULL;
	unsigned int i = 0;

	if (size == 0)
		return (0);

	p = (char *)malloc(sizeof(char) * size);

	if (p == NULL)
		return (NULL);

	while (i < size)
	{
		p[i] = c;
		i++;
	}

	return (p);
}
