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

	if (s1 == NULL && s2 == NULL)
	{
		p = (char *)malloc(1);

		if (p == NULL)
			return (p);

		p = strcpy(p, "");
		return (p);
	}
	else if (s2 == NULL)
		return (s1);
	else if (s1 == NULL)
		return (s2);

	len1 = strlen(s1);
	len2 = strlen(s2);

	p = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (p == NULL)
		return (p);

	p = strcpy(p, s1);
	p = strcat(p, s2);
	return (p);
}
