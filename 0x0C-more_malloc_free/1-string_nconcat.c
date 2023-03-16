#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of characters to take from s2
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	int l1, l2;

	if (s1 == NULL)
		s1 = strcpy(s1, "");
	else if (s2 == NULL)
		s2 = strcpy(s2, "");

	l1 = strlen(s1);
	l2 = strlen(s2);

	if (n < 0)
		return (NULL);

	result = malloc(l1 + l2 + 1);
	if (result == NULL)
		return (result);

	if (n < l2)
		result = strncat(s1, s2, n);
	else
		result = strncat(s1, s2, l2);
	return (result);
}
