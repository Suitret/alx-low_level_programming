#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int i = 1, t, f;

	printf("%d", i);
	for (i = 2; i <= 100; i++)
	{
		t = i % 3;
		f = i % 5;

		printf(" ");
		if (t == 0)
			printf("Fizz");
		if (f == 0)
			printf("Buzz");
		if (t && f)
			printf("%d", i);
	}
	printf("\n");
	return (0);
}
