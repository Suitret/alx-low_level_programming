#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * countLenght - counts the lenght of words
 * @str: given string
 * Return: lenght
 */

int countLenght(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != ' ' && str[i] != '\0'; i++)
		count++;
	return (count);
}

/**
 * setWord - puts words at their place
 * @p: pointer on pointer
 * @str: given string
 * Return: void
 */

void setWord(char **p, char *str)
{
	int i, j = 0, temp;

	for (i = 0; str[i] != '\0';)
	{
		temp = countLenght(str + i);
		if (temp != 0)
		{
			p[j] = strncpy(p[j], str + i, temp);
			p[j][temp] = '\0';
			j++;
		}
		if (temp == 0)
			i++;
		else
			i += temp;
	}
	p[j] = NULL;
}

/**
 * allocWord - allocates space for words
 * @p: pointer on pointer
 * @str: given string
 * Return: void
 */

char **allocWord(char **p, char *str)
{
	int i, j = 0, k, temp;

	for (i = 0; str[i] != '\0';)
	{
		temp = countLenght(str + i);
		if (temp != 0)
		{
			p[j] = (char *)malloc((temp + 1) * sizeof(char));

			if (p[j] == NULL)
			{
				if (j == 0)
				{
					free(p[j]);
					free(p);
					return (NULL);
				}
				else
				{
					for (k = 0; k < j; k++)
						free(p[k]);
					free(p);
					return (NULL);
				}
			}
			j++;
		}
		if (temp == 0)
			i++;
		else
			i += temp;
	}
	return (p);
}

/**
 * strtow - splits a string into words
 * @str: given string
 * Return: pointer
 */

char **strtow(char *str)
{
	int i, countWord = 0;
	char **p;

	for (i = 0; str[i + 1] != '\0'; i++)
	{
		if ((i == 0 && str[i] != ' ') || (str[i] == ' ' && str[i + 1] != ' '))
			countWord += 1;
	}
	if (countWord == 0 || strcmp(str, "") == 0)
		return (NULL);
	p = (char **)malloc((countWord + 1) * sizeof(char *));

	if (p == NULL)
		return (NULL);

	p = allocWord(p, str);

	if (p == NULL)
	{
		return (NULL);
	}
	setWord(p, str);

	return (p);
}
