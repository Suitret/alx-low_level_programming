#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int lenght = strlen(s), i = 1;

	while (i != lenght)
	{
		_putchar(s[lenght - i]);
		i++;
	}
}
