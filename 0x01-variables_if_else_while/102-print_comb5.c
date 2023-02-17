#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int i, j, k, l;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; (j <= i) && (j < 57); j++)
		{
			for (k = i; (k < 58); k++)
			{
				for (l = j + 1; (l > j) && (l < 58); l++)
				{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(l);
					if ((i != 57) || (j != 56) || (k != 57) || (l != 57))
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
