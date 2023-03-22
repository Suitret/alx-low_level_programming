#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints opcodes
 * @f: pointer to function
 * @n: number of bytes
 * Return: void
 */

void print_opcodes(int n, int (*f)(int, char**))
{
	unsigned char *opcodes = (unsigned char *)f;
	int i;

	printf("%.2x", opcodes[0]);
	for (i = 1; i < n; i++)
	{
		printf(" %.2x", opcodes[i]);
	}
	printf("\n");
}

/**
 * main - entry point
 * @argc: first argument
 * @argv: second argument
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes(num_bytes, main);
	return (0);
}

