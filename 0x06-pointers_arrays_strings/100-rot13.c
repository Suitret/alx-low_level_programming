#include <string.h>
#include <ctype.h>

/**
 * rot13 - rotates alphabetic characters
 * @str: given string
 * Return: result string
 */

char *rot13(char *str)
{
	int i = 0, n = strlen(str);

	while (i < n)
	{
		while (isalpha(*(str + i)))
		{
			if (islower(*(str + i)))
			{
				*(str + i) = ((*(str + i) - 97 + 13) % 26) + 97;
				break;
			}
			*(str + i) = ((*(str + i) - 65 + 13) % 26) + 65;
			break;
		}
		i++;
	}
	return (str);
}
