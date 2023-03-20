#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer on char
 * @b: constant byte
 * @n: number of bytes used in memory
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
