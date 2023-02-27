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
	int i, n = strlen(s);
	char tab[n];

	for (i = 0; i < n; i++)
	{
		tab[i] = *(s + i);
	}

	for (i = 0; i < n; i++)
	{
		*(s + i) = *(tab + n - 1 - i);
	}
}
