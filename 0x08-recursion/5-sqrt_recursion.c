#include <stdio.h>

/**
 * sqrtSearchHelper - search the sqrt
 * @low: lowest value
 * @high: highest value
 * @N: given number
 * Return: sqrt
 */

int sqrtSearchHelper(int low, int high, int N)
{
	int mid = (low + high) / 2;

	if (low > high)
		return (low - 1);
	if (mid * mid <= N && (mid + 1) * (mid + 1) > N)
		return (mid);
	else if (mid * mid < N)
		return (sqrtSearchHelper(mid + 1, high, N));
	else
		return (sqrtSearchHelper(low, mid - 1, N));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: given number
 * Return: sqrt
 */

int _sqrt_recursion(int n)
{
	return (sqrtSearchHelper(0, n, n));
}
