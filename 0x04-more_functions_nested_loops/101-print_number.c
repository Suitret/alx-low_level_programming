#include <stdio.h>
#include <stdlib.h>

/**
 * print_number - print a given number
 * @n: given number
 * Return: void
 */

void print_number(int n)
{
	int divisor = 1;
	int digit, abs_value;

	if (n < 0)
	{
		_putchar('-');
		abs_value = -n;
	}
	else
	{
		abs_value = n;
	}

	while (abs_value / divisor >= 10)
	{
		divisor *= 10;
	}

	while (divisor > 0)
	{
		digit = abs_value / divisor;
		_putchar(digit + '0');
		abs_value %= divisor;
		divisor /= 10;
	}
}
