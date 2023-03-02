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
	int value = 0, digit, temp = abs(n);

	(n == 0) ? _putchar('0') : _putchar('');

	if (n < 0)
		_putchar('-');

	while (temp)
	{
		value = 10 * value + temp % 10;
		temp /= 10;
	}

	while (value)
	{
		digit = value % 10;
		value = value / 10;
		_putchar('0' + digit);
	}
}
