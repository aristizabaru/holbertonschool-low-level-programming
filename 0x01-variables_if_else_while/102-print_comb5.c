#include <stdio.h>
/**
 * main - entry point
 * Description: combinations 3 digits
 * Return: 0
 */
int main(void)
{
	int A, A2, B, B2;

	for (A = 0; A <= 9; A++)
	{
		for (B = 0; B <= 9; B++)
		{
			for (A2 = 0; A2 <= 9; A2++)
			{
				for (B2 = 0; B2 <= 9; B2++)
				{
					if (A <= A2 && (A + B <= A2 + B2))
					{
						if (!(A == A2 && B == B2))
						{
							putchar(A + '0');
							putchar(B + '0');
							putchar(32);
							putchar(A2 + '0');
							putchar(B2 + '0');
							if (!((A == 9 && B == 8) && (A2 == 9 && B2 == 9)))
							{
								putchar(44);
								putchar(32);
							}
						}
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
