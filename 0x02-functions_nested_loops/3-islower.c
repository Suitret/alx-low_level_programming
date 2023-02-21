#include <stdio.h>
#include "main.h"

/**
 * _islower - check for lowercase character
 * @c: ascii value of the character
 * Return: 1 if the character is lower and 0 else
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
