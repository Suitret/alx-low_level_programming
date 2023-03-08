#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _puts_recursion -  prints a string, followed by a new line
 * @s: string to print
 * Return: void
 */

void _puts_recursion(char *s)
{
	int lenght = strlen(s), i = 0;

	while (i != lenght)
	{
		_putchar(s[i]);
		i++;
	}
}
