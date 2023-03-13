#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to copy
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *p;
	int len, i = 0;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	p = (char *)malloc(len + 1);

	if (p == NULL)
		return (NULL);

	p = strcpy(p, str);
	return (p);
}
