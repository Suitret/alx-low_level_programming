#include <stdio.h>

/**
 * isPrime - check if a number is prime or not
 * @n: number to check
 * Return: 0 or 1
 */

int isPrime(int n)
{
	int i, temp = 0;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			temp = 1;
			break;
		}
	}
	if (temp == 0)
		return (1);
	else
		return (0);
}

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	unsigned long int n = 612852475143, prime;
	int i;

	for (i = 2; i < n; i++)
	{
		if (isPrime(i) && (n % i == 0))
		{
			n /= i;
			prime = i;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
