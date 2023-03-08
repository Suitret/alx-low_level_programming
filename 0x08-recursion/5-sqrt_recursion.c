#include <stdio.h>

/**
 * sqrtSearchHelper - search the sqrt
 * @i: 1
 * @N: given number
 * Return: sqrt
 */

int sqrtSearchHelper(int i, int N)
{
	if (N < 0)
		return (-1);
	else if (N == 0)
		return (0);
	if (i * i <= N && (i + 1) * (i + 1) > N)
		return (i);
	else
		return (sqrtSearchHelper(i + 1, N));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: given number
 * Return: sqrt
 */

int _sqrt_recursion(int n)
{
	return (sqrtSearchHelper(1, n));
}
