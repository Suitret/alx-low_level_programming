#include <string.h>
#include <ctype.h>

/**
 * rot13 - rotates alphabetic characters
 * @str: given string
 * Return: result string
 */

char *rot13(char *str)
{
	int i, n = strlen(str);

	for (i = 0; i < n; i++)
	{
		for (; isalpha(*(s + i));)
		{
			if (islower(*(s + i)))
			{
				*(s + i) = ((*(s + i) - 97 + 13) % 26) + 97;
				break;
			}
			*(s + i) = ((*(s + i) - 65 + 13) % 26) + 65;
		}
	}
	return (str);
}
