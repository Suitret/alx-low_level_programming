#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int r
	r = _islower('H');
	_putchar(r +'0');
	r = _islower('o');
	_putchar(r +'0');
	r = _islower(108);
	_putchar(r +'0');
	_putchar('\n');
	return (0);
}

/**
 * _islower - check for lowercase character
 * @c: ascii value of the character
 * Return: 1 if the character is lower and 0 else
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
