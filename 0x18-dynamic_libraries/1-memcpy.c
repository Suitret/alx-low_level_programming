#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory area.
 * @dest: pointer destination
 * @src: pointer source
 * @n: number of bytes used in memory
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
