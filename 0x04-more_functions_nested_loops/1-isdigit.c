#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - cheks if a character is a digit
 * @c: ascii value
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}