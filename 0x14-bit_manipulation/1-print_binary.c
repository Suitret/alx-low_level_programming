#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints n in base 2
 * @b: number
 * Return: void
 */

void print_binary(unsigned long int b)
{
	if (b > 1)
		print_binary(b >> 1);
	_putchar((b & 1) + '0');
}
