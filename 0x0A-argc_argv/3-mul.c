#include <stdio.h>

/**
 * main - Entry point
 * @argc: first argument
 * @argv: second argument
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d\n", argv[2] * argv[1]);
	else
		printf("Error\n");
	return (1);
}
