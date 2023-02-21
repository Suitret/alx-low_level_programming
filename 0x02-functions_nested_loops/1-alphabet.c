#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - print alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet(void)
{
	int i = 97;

	while (i != 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
