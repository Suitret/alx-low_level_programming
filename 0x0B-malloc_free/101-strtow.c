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
 * fillLenght - fills the array of lenght of words
 * @str: given string
 * @tab: array of lenght
 * Return: void
 */
 
void fillLenght(char *str, int *tab)
{
    int i, j = 0, temp;
    
    for (i = 0; str[i] != '\0';)
    {
        temp = countLenght(str + i);
        if (temp != 0)
        {
            tab[j] = temp;
            j++;
        }
        if (temp == 0)
        	i++;
        else
        	i += temp;
    }
}

/**
 * allocWord - allocates space for words
 * @p: pointer on pointer
 * @str: given string
 * @size: size of tab
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
 * @tab: array of lenght
 * @size: size of tab
 * Return: void
 */
 
char **allocWord(char **p, int *tab, int size)
{
    int i, j;
    
    for (i = 0; i < size; i++)
    {
        p[i] = (char *)malloc((tab[i] + 1) * sizeof(char));
        
        if (p[i] == NULL)
		{
			if (i == 0)
			{
				free(p[i]);
				free(p);
				return (NULL);
			}
			else
			{
				for (j = 0; j < i; j++)
					free(p[j]);
				free(p);
				return (NULL);
			}
		}
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
    int i, countWord = 0, *tab;
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
        
    tab = (int *)malloc(countWord * sizeof(int));
    
    if (tab == NULL)
        return (NULL);
        
    fillLenght(str, tab);
    
    p = allocWord(p, tab, countWord);
    
    if (p == NULL)
    {
        return (NULL);
    }
	/*for (i = 0; i < countWord; i++)
	{
		printf("%d\t", tab[i]);
		
	}*/
	setWord(p, str);
    
    return (p);
}
