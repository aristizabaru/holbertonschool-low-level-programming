#include "holberton.h"

/**
 * is_palindrome - states if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int i;

	i = _strlen(s) - 1;
	return (check_palindrome(0, i, s));
}

/**
 * check_palindrome - checks if a string is a palindrome
 * @l: left index
 * @r: right index
 * @s: string
 *
 * Return: 1 if palindrome 0 if not
 */
int check_palindrome(int l, int r, char *s)
{
	/*base condition*/
	if (l >= r)
		return (1);
	else if (s[l] != s[r])
		return (0);
	return (check_palindrome(l + 1, r - 1, s));
}

/**
 * _strlen - return length of string
 * @str: string to check
 *
 * Return: length of str
 */
int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	/*adds 1 to find the lenght onr return*/
	return (1 + _strlen(str + 1));
}
