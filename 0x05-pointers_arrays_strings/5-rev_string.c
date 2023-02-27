#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer on char
 * Return: void
 */

void rev_string(char *s)
{
	char *t = s;
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = *(t + n - 1 - i);
	}
}
