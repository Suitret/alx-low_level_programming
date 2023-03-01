#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: adress of the string
 * Return: result of change
 */

char *string_toupper(char *s)
{
	int i, n = strlen(s);

	for (i = 0; i < n; i++)
		*(s + i) = toupper(*(s + i));
	return (s);
}
