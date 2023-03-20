#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer on char
 * @accept: string to identify
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
