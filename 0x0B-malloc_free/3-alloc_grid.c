#include "holberton.h"

/**
 * alloc_grid - create 2D array of integers
 * @width: ancho
 * @height: largo
 * Description: each element is initializaded to 0
 *
 * Return: pointer to 2D array
 * if any parameter == 0 return NULL
 */
int **alloc_grid(int width, int height)
{
	int **p = NULL;
	int i, j;

	/*check parameters*/
	if (width < 1 || height < 1)
		return (NULL);

	/*allocate memory to create colums with size of a pointer*/
	p = (int **)malloc(sizeof(int *) * height);

	/*check if memory allocation*/
	if (p == NULL)
		return (NULL);

	/*allocate memory to create rows in each column*/
	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(sizeof(int) * width);

		/*liberates memory if fails // rows and colums*/
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(p[j]);
			free(p);
			return (NULL);
		}

		/*initialize with 0*/
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}

	return (p);
}
