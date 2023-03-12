#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <errno.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: first argument
 * @argv: second argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	long temp = 0, i, c;
	char *endptr;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			c = strtol(argv[i], endptr, 10);
			if (c < 0 || (*endptr != '\0'))
			{
				printf("Error\n");
				return (1);
			}
			temp += c;
		}
		printf("%ld\n", temp);
	}
	return (0);
}
