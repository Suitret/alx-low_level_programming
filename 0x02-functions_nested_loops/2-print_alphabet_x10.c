
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
 * print_alphabet - print alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 97; j < 123; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
