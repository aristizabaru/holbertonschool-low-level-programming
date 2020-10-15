#include "holberton.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of elements
 *
 * Return: void pointer
 * if fails return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p = NULL;
	unsigned int i;

	/*check arguments*/
	if (nmemb == 0 || size == 0)
		return (NULL);
	/*allocate memory*/
	p = malloc(size * nmemb);
	/*check memory*/
	if (p == NULL)
		return (NULL);
	/*initialice memory to zero*/
	for (i = 0; i <= nmemb; i++)
	{
		p[i + size] = 0;
	}
	/*fill first position*/
	p[0] = 0;
	/*return pointer cast to void*/
	return ((void *)p);
}
