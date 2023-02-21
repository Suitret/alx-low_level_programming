#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	long int a = 1, b = 2, sum = 0, temp;

	while (b < 4000000)
	{
		if (b % 2 == 0)
		{
			sum += b;
		}
		temp = b;
		b += a;
		a = temp;
	}
	printf("%d\n", sum);
	return (0);
}
