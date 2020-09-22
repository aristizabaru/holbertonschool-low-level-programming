#include "holberton.h"

/**
 * jack_bauer - prints from 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int h1, h2, m, s;

	for (h1 = 48; h1 < 51; h1++)
	{
		for (h2 = 48; h2 < 58; h2++)
		{
			for (m = 48; m < 54; m++)
			{
				for (s = 48; s < 58; s++)
				{

					_putchar(h1);
					_putchar(h2);
					_putchar(58);
					_putchar(m);
					_putchar(s);
					_putchar('\n');
				}
			}
			if (h1 == 50 && h2 == 51)
				break;
		}
	}
}
