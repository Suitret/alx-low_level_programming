#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int a = 1, b = 2, n = 47, temp;

	printf("%d, ", a);
	while (n != 0)
	{
		if (n != 1)
		{
			printf("%d, ", b);
		}
		else
		{
			printf("%d", b);
		}
		temp = b;
		b += a;
		a = temp;
		n--;
	}
	printf("\n");
	return (0);
}
