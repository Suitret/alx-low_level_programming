#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print numbers from 0 to 9 except 2 and 4
 *
 * Return: void
 */

void more_numbers(void)
{
	int i = 0, j = 0, a, b;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			a = j / 10;
			b = j % 10;
			if (a == 1)
				_putchar('0' + a);
			_putchar('0' + b);
		}
		_putchar('\n');
	}
}
