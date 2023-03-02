#include <string.h>
#include <ctype.h>

/**
 * rot13 - rotates alphabetic characters
 * @str: given string
 * Return: result string
 */

char *rot13(char *str)
{
	int i = 0, j, n = strlen(str);
	char *first = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *second = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int l = strlen(first);

	while (i < n)
	{
		j = 0;
		while (j < l)
		{
			if (*(first + j) == *(str + i))
				*(s + i) = 
			j++;
		}
		i++;
	}
	return (str);
}
