#include <stdio.h>
#include "main.h"

/**
 * print_times_table - print multiplication table of 9
 * @n: given number
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, temp, a, b;

	for (i = 0; i <= n ; i++)
	{
		for (j = 0; j <= n; j++)
		{
			temp = i * j;
			if (j != 0)
				_putchar(' ');

			if (temp > 9)
			{
				a = temp / 10;
				b = temp % 10;
				_putchar('0' + a);
				_putchar('0' + b);
				if (j != 9)
				{
					_putchar(',');
				}
			}
			else
			{
				b = temp % 10;
				_putchar('0' + b);
				if (j != 9)
				{
					_putchar(',');
					if (i * (j + 1) < 10)
						_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
