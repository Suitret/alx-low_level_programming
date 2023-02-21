#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	long int a = 1, b = 2, n = 99, temp;

	printf("%ld, ", a);
	while (n != 0)
	{
		if (n != 1)
		{
			printf("%ld, ", b);
		}
		else
		{
			printf("%ld", b);
		}
		temp = b;
		b += a;
		a = temp;
		if (b < 0)
			b = -b;
		n--;
	}
	printf("\n");
	return (0);
}
