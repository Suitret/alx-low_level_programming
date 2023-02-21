#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print natural numbers from n to 98
 * @n: given number
 * Return: void
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n != 99)
		{
			printf("%d", n);
			if (n <= 97)
				printf(", ");
			n++;
		}
	}
	else
	{
		while (n != 97)
		{
			printf("%d", n);
			if (n >= 99)
				printf(", ");
			n--;
		}
	}
	printf("\n");
}
