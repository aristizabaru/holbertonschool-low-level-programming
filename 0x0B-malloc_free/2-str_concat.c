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
	unsigned int length = 0, i = 0, j = 0, ls1 = 0, ls2 = 0;

	/*check if theres is values in strings*/
	if (s1 == NULL)
		ls1 = 0;
	else
		ls1 = getLength(s1);

	if (s2 == NULL)
		ls2 = 0;
	else
		ls2 = getLength(s1);

	/*get string1 length*/
	length = ls1 + ls2;

	/*allocate memory for new string + null char*/
	p = (char *)malloc(sizeof(char) * length + 1);

	/*if memory not allocated*/
	if (p == NULL)
		return (NULL);

	/*copy string to pointer*/
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	/*copy string to pointer*/
	while (s2[j])
	{
		p[i] = s2[j];
		j++;
		i++;
	}
	/*asign null character to end*/
	p[i] = '\0';
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
