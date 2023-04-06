#include <stdio.h>
#include "main.h"

/**
 * get_endianness - returns 0 or 1
 * Return: 0 or 1
 */

int get_endianness(void)
{
	int i = 1;
	char *p = (char *)&i;

	if (p[0] == 1)
		return (1);

	return (0);
}
