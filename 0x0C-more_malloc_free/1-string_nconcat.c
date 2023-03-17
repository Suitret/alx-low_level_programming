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
	char *result, tab[] = "";
	unsigned int l1, l2;

	if (s1 == NULL)
		s1 = tab;
	else if (s2 == NULL)
		s2 = tab;

	l1 = strlen(s1);
	l2 = strlen(s2);

	if (n < l2)
		result = malloc(l1 + n + 1);
	else
		result = malloc((l1 + l2 + 1));

	if (result == NULL)
		return (result);

	strcpy(result, s1);

	if (n < l2)
		strncat(result, s2, n);
	else
		strncat(result, s2, l2);

	return (result);
}
