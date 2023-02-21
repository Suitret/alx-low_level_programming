#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - give the last digit of a given number
 * @n: given number
 * Return: the last digit of the given number
 */
int print_last_digit(int n)
{
	int temp = abs(n) % 10;

	_putchar(temp + '0');
	return (temp);
}
