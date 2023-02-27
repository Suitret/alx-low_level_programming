#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - prints character at even position
 * @str: pointer on char
 * Return: void
 */

void puts2(char *str)
{
	int i = 0, n = strlen(s);

	while (i < n)
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}

