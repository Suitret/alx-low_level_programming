#include <stdio.h>

/**
 * print_numbers - print numbers from 0 to 9
 *
 * Return: void
 */

void print_numbers(void)
{
	int i;

	while (i < 10)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
