#include <stdio.h>
#include "main.h"

/**
 * print_number - prints any integer
 * @n: given integer
 * Return: void
 */

void print_number(int n)
{
	int value = 0, digit;

	if (n < 0)
		_putchar('-');

	while (n)
	{
		value = 10 * value + n % 10;
		n /= 10;
	}

	while (value)
	{
		digit = value % 10;
		value = value / 10;
		_putchar('0' + digit);
	}
}
