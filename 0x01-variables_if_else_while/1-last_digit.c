#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int n, tmp;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	tmp = n % 10;
	if (tmp == 0)
	{
		printf("Last digit of %d is %d and is %d\n", n, tmp, tmp);
	}
	else if (tmp > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, tmp);
	}
	else if (tmp < 6)
	{
		printf("Last digit of %d is %d and is less than 5 and is not 0\n", n, tmp);
	}
	return (0);
}
