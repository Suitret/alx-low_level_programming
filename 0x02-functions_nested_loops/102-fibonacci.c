#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	long long int a = 1, b = 2, n = 49, temp;

	printf("%lld, ", a);
	while (n != 0)
	{
		if (n != 1)
		{
			printf("%lld, ", b);
		}
		else
		{
			printf("%lld", b);
		}
		temp = b;
		b += a;
		a = temp;
		n--;
	}
	printf("\n");
	return (0);
}
