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
	while (*haystack)
	{
		int i = 0;

		while (needle[i])
		{

			if (*haystack == needle[0])
				return (haystack);
			i++;
		}

		haystack++;
	}

	return (NULL);
}
