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
	char *fillerNew = p;
	char *fillerOld = ptr;
	unsigned int i = 0;

	/*check if there's a change in size*/
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	/*allocate new memory to new pointer*/
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	/*return new pointer if old ptr is null*/
	if (ptr == NULL)
	{
		return (p);
	}
	/*copy content to new pointer*/
	if (new_size > old_size)
	{
		while (fillerOld[i])
		{
			fillerNew[i] = fillerOld[i];
			i++;
		}
		free(ptr);
		free(fillerNew);
		free(fillerOld);
	}
	else
	{
		for (; i < new_size; i++)
		{
			fillerNew[i] = fillerOld[i];
		}
		free(ptr);
		free(fillerNew);
		free(fillerOld);
	}

	return (p);
}
