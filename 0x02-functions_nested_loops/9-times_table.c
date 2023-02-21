#include <stdio.h>
#include "main.h"

/**
 * times_table - print multiplication table of 9
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, temp, a, b;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
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
					/*if (i * j < 10)*/
						/*_putchar(' ');*/
				}
			}
			else
			{
				b = temp % 10;
				_putchar('0' + b);
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
