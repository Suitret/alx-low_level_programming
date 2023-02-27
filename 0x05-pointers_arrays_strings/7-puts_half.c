#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer on char
 * Return: void
 */

void puts_half(char *str)
{
	int n = strlen(str), i = (n - 1) / 2;

	while (i < n)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
