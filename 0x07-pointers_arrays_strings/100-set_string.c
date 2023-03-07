#include <stdio.h>
#include <string.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer on a pointer
 * @to: pointer on char
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
