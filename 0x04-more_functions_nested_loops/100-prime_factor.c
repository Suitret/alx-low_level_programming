#include <stdio.h>
#include <math.h>

/**
 * isPrime - check if a number is prime or not
 * @n: number to check
 * Return: 0 or 1
 */

int isPrime(int n)
{
	int i;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	long int n = 612852475143;
	int i, prime, tmp = sqrt(n);

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
