#include "holberton.h"

/**
 * _strstr -  locates a substring.
 * @haystack: string to evaluate
 * @needle: characters to be found
 * Description: finds the first occurrence of the substring needle
 * in the string haystac. The terminating null bytes (\0) are not compared
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;

	while (*haystack)
	{
		if (*haystack == needle[i])
		{
			i++;
			if (needle[i] == '\0')
				return (haystack - (i - 1));
		}
		else
		{
			i = 0;
			if (*haystack == needle[i])
				i++;
		}

		haystack++;
	}

	return (0);
}
