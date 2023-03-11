#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: first argument
 * @argv: second argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	long c1, c2;
	int temp;
	char *p;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	c1 = strtol(argv[1], &p, 10);
	c2 = strtol(argv[2], &p, 10);
	temp = c1 * c2;
	printf("%d\n", temp);
	return (0);
}
