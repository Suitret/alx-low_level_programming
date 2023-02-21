#include <stdio.h>
#include "1-alphabet.h"

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
	for (int i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
