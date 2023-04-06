#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * contain_0_or_1 - checks if the string contains another char != from 0 and 1
 * @b: string
 * Return: 0 or 1
 */

int contain_0_or_1(char *b)
{
	int i = 0;

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	return (1);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0, i, j = 1, len;

	if (!b)
		return (0);
	else if (!contain_0_or_1(b))
		return (0);

	len = strlen(b);
	for (i = 0; i < len; i++)
	{
		if (b[i] == '1')
			number += j;
		j *= 2;
	}
	return (number);
}
