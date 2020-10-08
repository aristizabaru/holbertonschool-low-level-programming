#include "holberton.h"

/**
 * wildcmp - compares if two strings are identicals
 * @s1: string 1
 * @s2: string 2
 * Description: s2 can contain the special character *
 * The special char * can replace any string (including an empty string)
 *
 * Return: 1 if identical, 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	/*entry condition*/
	if (*s1 == '\0' || (*s2 == '*' && *(s2 + 1) == '\0'))
		return (0);
	/*base condition*/
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (look_wildcmp(s1, s2 + 1));
	return (0);
}

/**
 * look_wildcmp - looks for wildcardas and process information
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 1 if identical, 0 if not
 */
int look_wildcmp(char *s1, char *s2)
{

	/*base condition*/
	if (*(s2 + 1) == '\0' && *s1 == '\0')
		return (0);
	if (*s1 == '\0')
		return (1);
	if (*s1 != *s2)
	{
		if (*s2 == '*')
			return (look_wildcmp(s1, s2 + 1));
		return (look_wildcmp(s1 + 1, s2));
	}
	/*solves case of star with string repeated ahead*/
	if (*s1 == *s2 && *(s2 - 1) == '*')
		return (look_other(s1 + 1, s2 - 1, 1));

	return (wildcmp(s1, s2));
}

/**
 * look_other - finds problems with *
 * @s1: string 1
 * @s2: string 2
 * @i: iterador
 *
 * Return: 1 if identical, 0 if not
 */
int look_other(char *s1, char *s2, int i)
{
	if (*s1 == '\0')
		return (look_wildcmp(s1, s2));
	if (*s1 != *(s1 - i))
		look_other(s1 + 1, s2, i + 1);
	return (look_wildcmp(s1, s2));
}
