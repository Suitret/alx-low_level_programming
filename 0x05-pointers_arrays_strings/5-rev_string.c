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
	int i, j = strlen(s), temp;

	for (i = 0, j -= 1; i < j; i++, j--)
	{
		temp = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = temp;
	}
}
