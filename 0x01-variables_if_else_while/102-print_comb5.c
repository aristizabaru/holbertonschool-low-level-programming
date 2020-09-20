#include <stdio.h>

/**
 * print - print numbers
 * Description: print numbers combinations
 * checking no repeat
 * @Ap: Primer digito pointer - primer número
 * @Bp: Segundo digito pointer - primer número
 * @A2p: Primer digito pointer - segundo número
 * @B2p: Segundo digito pointer - segundo número
 * Return: 0
 */
int print(int *Ap, int *Bp, int *A2p, int *B2p)
{
	int A = *Ap;
	int B = *Bp;
	int A2 = *A2p;
	int B2 = *B2p;

	if (A < A2 || (A == A2 && B < B2))
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
	return (0);
}

/**
 * main - entry point
 * Description: gets all numbers combinations
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
					print(&A, &B, &A2, &B2);
				}
			}
		}
	}

	putchar(10);
	return (0);
}
