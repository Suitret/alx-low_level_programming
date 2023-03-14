#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
	int len = 0, i;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	if (ac == 1)
		return (av[0]);

	for (i = 0; i < ac; i++)
	{
		len += (strlen(av[i]) + 1);
	}

	p = (char *)malloc(len + 1);

	if (p == NULL)
		return (p);

	for (i = 0; i < ac; i++)
	{
		p = strcat(p, av[i]);
		len = strlen(av[i]);
		p[len] = '\n';
		p[len + 1] = '\0';
	}
	return (p);
}
