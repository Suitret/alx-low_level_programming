#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer on char
 * Return: void
 */

void print_rev(char *s)
{
	char *ptr = s;
	int i = strlen(s) - 1;

	while (i > -1)
	{
		_putchar(*(ptr + i));
		i--;
	}
	_putchar('\n');
}
