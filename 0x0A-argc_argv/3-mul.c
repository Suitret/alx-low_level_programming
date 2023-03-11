#include <stdio.h>

/**
 * main - Entry point
 * @argc: first argument
 * @argv: second argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int temp;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	temp = argv[2] * argv[1];
	printf("%d\n", temp);
	return (0);
}
