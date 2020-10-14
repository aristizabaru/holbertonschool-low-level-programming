#include "holberton.h"

/**
 * _strdup - copy of the string given as a parameter
 * @str: string to copy to new memory
 *
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	char *p = NULL;
	unsigned int length = 0, i = 0;

	/*check if theres is a string*/
	if (str == NULL)
		return (NULL);

	/*get string length*/
	while (str[i] != '\0')
	{
		length++;
		i++;
	}

	p = (char *)malloc(sizeof(char) * length);

	/*if memory not allocated*/
	if (p == NULL)
		return (NULL);

	i = 0;

	/*copy string to pointer*/
	while (str[i] != '\0')
	{
		p[i] = str[i];
		i++;
	}

	return (p);
}
