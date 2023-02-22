#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b)
	{
		if ((b > c) || ((c > b) && (a > c)))
			largest = a;
		else
			largest = c;
	}
	else
	{
		if ((a > c) || ((b > c) && (c > a)))
			largest = b;
		else
			largest = c;
	}

	return (largest);
}
