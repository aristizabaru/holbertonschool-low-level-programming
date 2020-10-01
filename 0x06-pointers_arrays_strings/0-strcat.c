#include "holberton.h"

/**
 * _strcat -  concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Description: appends the src string to the dest string
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int l = 0, i = 0; /*(l)argo, (i)terador*/

	/*definir largo dest*/
	while (*(dest + i) != '\0')
	{
		i++;
		l++;
	}

	/*copio " " en largo -1*/
	*(dest + l - 1) = ' ';
	i = 0;

	/*copio src a dest desde desde largo*/
	while (*(src + i) != '\0')
	{
		*(dest + (l + i)) = *(src + i);
		i++;
	}
	*(dest + (l + i)) = *(src + i);

	return (dest);
}
