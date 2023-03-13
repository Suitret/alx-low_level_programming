#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - returns a pointer to the concatened string
 * @s1: destination string
 * @s2: source string
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *p;

	if (s2 == NULL)
		return (s1);

	if (s1 == NULL)
		return (s2);

	len1 = strlen(s1);
	len2 = strlen(s2);

	p = (char *)malloc((len1 + len2 + 2) * sizeof(char));

	if (p == NULL)
		return (p);

	p = strcat(s1, s2);
	return (p);
}
