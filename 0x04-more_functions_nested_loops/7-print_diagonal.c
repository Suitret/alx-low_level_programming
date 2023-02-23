#include <stdio.h>

/**
 * print_diagonal - print a diagonal made of '\'
 * @n: lenght of the diagonal
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i < n)
		{
			j = 0;
			while (j < n)
			{
				if (i == j)
					_putchar('\');
				else
					_putchar(' ');
				j++;
			}
			i++;
			_putchar('\n');
		}
	}
}
