#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * leet - converts some characters
 * @str: pointer on string
 * Return: result
 */

char *leet(char *str)
{
	char tab[] = "oltea";
	int i = 0, j;

	while (str[i])
	{
		j = 0;
		while (tab[j])
		{
			if (tolower(str[i]) == tab[j])
			{
				str[i] = '0' + j + 5 * (tab[j] / 116);
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
