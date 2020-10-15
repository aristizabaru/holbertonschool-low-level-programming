#include "holberton.h"

/**
 * getLength - get length of string
 * @s: string
 *
 * Return: number of chars
 */
unsigned int getLength(char *s)
{
	unsigned int length = 0;

	while (s[length])
	{
		length++;
	}

	return (length);
}

/**
 * string_nconcat - concatenates twostrings
 * @s1: string1
 * @s2: string 2
 * @n: n bytes to concatenate from s2 to s1
 *
 * Return: pointer to new string
 * if fails return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p = NULL;
	unsigned int s1length = 0, s2length = 0, length = 0;
	unsigned int i = 0, j = 0;

	/*check for NULL in the string*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1length = getLength(s1);
	s2length = getLength(s2);
	/*check if n is bigger than s2*/
	if (n <= s2length)
		s2length = n;
	/*add lenghts + NULL terminated*/
	length = s1length + s2length + 1;
	/*assign memory*/
	p = malloc(sizeof(*p) * length);
	/*check if memory allocation fails*/
	if (p == NULL)
		return (NULL);
	/*pululate memory with strings*/
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	while (j < s2length)
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = '\0';
	return (p);
}
