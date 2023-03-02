#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_number - prints any integer
 * @n: given integer
 * Return: void
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num > 9)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + '0');
}
