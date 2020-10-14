#include "holberton.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Description: the new string is s1 + s2 + NULL char
 * if NULL is passed is treated as an empty string;
 *
 * Return: pointer to new string
 * NULL if fails
 */
char *str_concat(char *s1, char *s2)
{
	char *p = NULL;
	unsigned int length = 0, ls1 = 0, ls2 = 0, i = 0, j = 0;
	/*find length*/
	if (s1 == NULL)
		ls1 = 0;
	else
		ls1 = getLength(s1);
	if (s2 == NULL)
		ls2 = 0;
	else
		ls2 = getLength(s1);

	/*allocate memory + null char*/
	length = ls1 + ls2 + 1;
	p = (char *)malloc(sizeof(char) * length);

	/*concatenate strings*/
	if (p == NULL)
		return (NULL);
	while (i < ls1)
	{
		p[i] = s1[i];
		i++;
	}
	while (j < ls2)
	{
		p[i + j] = s2[j];
		j++;
	}
	/*add null char*/
	p[i + j] = '\0';
	return (p);
}

/**
 * getLength - get string length
 * @s: string
 *
 * Return: length
 */
int getLength(char *s)
{
	unsigned int l = 0;

	while (s[l])
	{
		l++;
	}

	return (l);
}
