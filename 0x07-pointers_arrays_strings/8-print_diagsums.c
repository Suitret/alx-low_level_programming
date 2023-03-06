#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: pointer on int
 * @size: size of the array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = 0, k = size - 1; j < size; j++, k--)
		{
			if (i == j)
			{
				sum1 += a[i][j];
				sum2 += a[i][k];
			}
		}
	}
}
