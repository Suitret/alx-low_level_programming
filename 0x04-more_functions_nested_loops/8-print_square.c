#include <stdio.h>

/**
 * print_square - print a diagonal made of '\'
 * @size: lenght of the square
 * Return: void
 */

void print_square(int size)
{
	int i = 0, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			i++;
			_putchar('\n');
		}
	}
}
