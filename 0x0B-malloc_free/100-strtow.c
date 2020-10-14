#include "holberton.h"

/**
 * strtow - get words from a string
 * @str: string
 *
 * Return: pointer to words
 */
char **strtow(char *str)
{
	char **p = NULL;
	int st = 0, i, j = 0;

	/*check if string is full*/
	if (str == NULL || str == '\0')
		return (NULL);
	st = getStrings(str);

	/*Allocate memory for pointers to rows of 2D array*/
	p = (char **)malloc(sizeof(char *) * st + 1);

	if (p == NULL)
		return (NULL);

	p[st] = NULL;

	/*Allocate memory to strings*/
	for (i = 0; i < st; i++)
	{
		/*the las +1 is for the null char*/
		p[i] = (char *)malloc(sizeof(char) * getCharacter(str, i + 1) + 1);

		/*liberates memory if fails // rows and colums*/
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(p[j]);
			free(p);
			return (NULL);
		}
	}

	p = populateMemory(p, str, st);
	return (p);
}

/**
 * populateMemory - populates with content memory
 * @p: pointer to be populated
 * @str: string to get words from
 * @st: length of 2D array
 *
 * Return:pointer to new string
 */
char **populateMemory(char **p, char *str, int st)
{
	int i, j = 0, c, k;

	/*polulate memory*/
	for (i = 0; i < st; i++)
	{
		c = 1, k = 0, j = 0;
		while (str[j])
		{
			if ((str[j] >= 'A' && str[j] <= 'Z') || (str[j] >= 'a' && str[j] <= 'z'))
			{
				if (c == i + 1)
				{
					p[i][k] = str[j];
					k++;
				}
				if (str[j + 1] == ' ')
				{
					p[i][k] = '\0';
					c++;
				}
			}
			j++;
		}
	}

	return (p);
}

/**
 * getCharacter - number of char of a word
 * @s: string to evaluate words
 * @n: number of word left to rigth to get chars number
 * Description: Get the number of char of a given n word
 *
 * Return: number of char of the word
 */
int getCharacter(char *s, int n)
{
	int i = 0, j = 0, c = 1;

	while (s[i])
	{
		if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
		{
			if (c == n)
				j++;
			if (s[i + 1] == ' ')
				c++;
		}
		i++;
	}
	return (j);
}

/**
 * getStrings - get number of words in a string
 * @s: string
 *
 * Return: number of words
 */
int getStrings(char *s)
{
	int c = 0, i = 0;

	while (s[i])
	{
		if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
		{
			if (s[i - 1] == ' ')
				c++;
		}
		i++;
	}

	return (c);
}
