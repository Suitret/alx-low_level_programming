#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring.
 * @haystack: pointer on char
 * @needle: string to identify
 * Return: haystack
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
