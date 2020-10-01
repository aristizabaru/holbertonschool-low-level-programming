#include "holberton.h"

/**
 * _strncat -  concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Description: appends the src string to the dest string
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	/*(l)argo dest, (i)terador, (l2)largo src*/
	int l = 0, i = 0, l2 = 0;

	/*definir largo dest*/
	while (*(dest + i) != '\0')
	{
		i++;
		l++;
	}
	i = 0;

	/*definir largo src*/
	while (*(src + i) != '\0')
	{
		i++;
		l2++;
	}
	i = 0;

	/*copio src a dest desde desde largo*/
	while (i < n)
	{
		*(dest + (l + i)) = *(src + i);
		i++;
		if (i > l2)
			break;
	}

	return (dest);
}
