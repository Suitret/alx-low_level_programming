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
	int n = strlen(s), i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + n - i);
		*(s + n - i) = temp;
	}
}
