#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * comeAfterSpecial - shows if a character comes after a special character
 * @s: adress of the string
 * @n: index of the character
 * Return: 0 or 1
 */

int comeAfterSpecial(char *s, int n)
{
	int temp = *(s + n - 1), i;
	int tab1[] = {' ', '\t', '\n', ',', ';', '.'};
	int tab2[] = {'!', '"', '(', ')', '{', '}', '?'};

	if (n == 0)
		return (1);

	for (i = 0; i < 6; i++)
	{
		if (temp == tab1[i])
			return (1);
	}
	for (; i < 13; i++)
	{
		if (temp == tab2[i])
			return (1);
	}
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @s: adress of the string
 * Return: result of change
 */

char *cap_string(char *s)
{
	int i, n = strlen(s);

	for (i = 0; i < n; i++)
	{
		if (isalpha(*(s + i)) && comeAfterSpecial(s, i))
			*(s + i) = toupper(*(s + i));
	}
	return (s);
}
