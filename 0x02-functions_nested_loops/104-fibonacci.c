#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long int a = 1, b = 2, n = 99, temp;

	printf("%lu, %lu", a, b);
	while (n != 0)
	{
		temp = b;
		b += a;
		a = temp;
		printf(", %lu", b);
		n--;
	}
	printf("\n");
	return (0);
}
