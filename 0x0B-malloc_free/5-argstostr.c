#include "holberton.h"

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: double pointer to arguments
 *
 * Return:pointer to new string, or NULL if error
 */
char *argstostr(int ac, char **av)
{
	char *p = NULL;
	int i, j, pos = 0, sum = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/*get length of arguments*/
	/*start from 1 to omit program name*/
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			;
		sum += j;
	}
	/*sum \n byte space to allocate memory*/
	sum += ac - 1;
	p = (char *)malloc(sizeof(char) * sum);

	/*print strings*/
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			p[pos] = av[i][j];
			pos++;
		}
		p[pos] = '\n';
		pos++;
	}
	return (p);
}
