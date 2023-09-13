#include <stdio.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using Jump search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int step, left, right, i;

	if (array == NULL || size == 0)
		return (-1);

	step = (int)sqrt(size);

	left = 0;
	right = 0;

	while (right < (int)size && array[right] < value)
	{
		left = right;
		right += step;
		printf("Value checked array[%d] = [%d]\n", right, array[right]);
	}

	printf("Value found between indexes [%d] and [%d]\n", left, right);
	for (i = left; i <= right && i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
