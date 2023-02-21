#include <ctype.h>
#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: ascii value of the character
 * Return: 1 if the character is lower and 0 else
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
