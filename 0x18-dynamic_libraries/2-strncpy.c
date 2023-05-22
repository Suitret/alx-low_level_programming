#include "main.h"
#include <string.h>

/**
 * _strncpy - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src to be taken
 * Return: result of concatenation
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
