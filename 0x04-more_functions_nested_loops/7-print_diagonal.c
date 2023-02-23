#include <stdio.h>
#include "main.h"

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
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
				{
					_putchar(92);
					break;
				}
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
