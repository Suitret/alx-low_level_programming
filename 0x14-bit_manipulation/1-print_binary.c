#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
