#include "main.h"
#include <ctype.h>

/**
 * _islower - test
 * @c: integer
 * Return: result
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	return (0);
}
