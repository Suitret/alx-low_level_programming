#include <stdio.h>

/**
 * prime - tells if a number is prime or not
 * @i: iterator
 * @n: given number
 * Return: 0 or greater
 */

int prime(int i, int n)
{
	if (i < n && (n % i) == 0)
		return (1 + prime(i + 1, n));
	if (i < n && (n % i) != 0)
		return (0 + prime(i + 1, n));
	if (i == n)
		return (0);
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: given number
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	int temp;

	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);

	temp = prime(2, n);

	if (temp != 0)
		return (0);
	else
		return (1);
}
