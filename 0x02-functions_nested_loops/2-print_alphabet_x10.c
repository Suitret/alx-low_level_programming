
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	print_alphabet_x10();
	return (0);
}

/**
 * print_alphabet_x10 - print alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0, j = 97;

	while (i != 10)
	{
		while (j != 123)
		{
			_putchar(j);
			j++;
		}
		i++;
		j = 97;
		_putchar('\n');
	}
}
