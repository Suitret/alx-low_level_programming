#include <stdio.h>
include "main.h"

/**
 * print_binary - prints n in base 2
 * @n: number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (b > 1)
		print_binary(b >> 1);
	_putchar((b & 1) + '0');
}
