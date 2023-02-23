#include <stdio.h>

/**
 * print_line - print a line made of '_'
 * @n: lenght of the line
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
			_putchar('\n');
	}
}
