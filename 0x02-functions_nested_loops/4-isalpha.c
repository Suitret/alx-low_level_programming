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
	r = _isalpha('H');
	_putchar(r +'0');
	r = _isalpha('o');
	_putchar(r +'0');
	r = _isalpha(108);
	_putchar(r +'0');
	_putchar('\n');
	return (0);
}

/**
 * _isalpha - check for alphabetic character
 * @c: ascii value of the character
 * Return: 1 if the character is lower and 0 else
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
