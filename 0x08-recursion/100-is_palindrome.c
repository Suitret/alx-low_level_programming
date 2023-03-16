#include <stdio.h>
#include <string.h>

/**
 * verify - verifies if a string is a palindrome
 * @s: given string
 * @m: first index
 * @n: second index
 * Return: integer
 */

int verify(char *s, int m, int n)
{
	if (m < strlen(s) / 2)
	{
		if (s[m] == s[n])
			return (1 + verify(s, m + 1, n - 1));
		return (0);
	}
	else
		return (0);
}

/**
 * is_palindrome - verifies if a string is a palindrome
 * @s: given string
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int n = strlen(s), m = 0;

	if (s == "")
		return (1);
	else if (verify(s, m, n - 1) == n / 2)
		return (1);
	else
		return (0);
}
