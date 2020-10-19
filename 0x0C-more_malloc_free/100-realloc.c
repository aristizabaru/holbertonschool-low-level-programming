#include "holberton.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to old string
 * @old_size: old size of memory allocated
 * @new_size: new size of memory requested
 *
 * Return: void pointer to new memory allocated
 * if fails return NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p = NULL;
	unsigned int i, max = new_size;

	/*check cases*/
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	/*allocate memory*/
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (ptr == NULL)
		return (p);
	/*fill array*/
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		*((char *)p + i) = *((char *)ptr + i);
	free(ptr);
	return (p);
}
