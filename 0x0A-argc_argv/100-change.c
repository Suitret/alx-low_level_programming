#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: first argument
 * @argv: second argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	long temp = 0, i, c;
	int coin[5] = {25, 10, 5, 2, 1};
	char *endptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	c = strtol(argv[1], &endptr, 10);
	for (i = 0; i < 5; i++)
	{
		if (c >= coin[i])
		{
			temp += 1;
			c -= coin[i];
			if (c >= coin[i])
				i -= 1;
		}
		else
			continue;
	}
	printf("%ld\n", temp);
	return (0);
}
