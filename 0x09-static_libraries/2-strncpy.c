#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src to be taken
 * Return: result of concatenation
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
