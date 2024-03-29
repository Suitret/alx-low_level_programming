#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point
 * @argc: first argument
 * @argv: second argument
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int (*ptr)(int, int) = NULL, a, b, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	ptr = get_op_func(argv[2]);

	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]), b = atoi(argv[3]);

	if ((ptr == op_div || ptr == op_mod) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = ptr(a, b);
	printf("%d\n", result);

	return (0);
}
