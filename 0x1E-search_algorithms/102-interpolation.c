#include <stdio.h>

/**
 * interpolation_search - Searches for a value in a sorted array of
 * integers using Interpolation search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low, high, pos;

	if (array == NULL || size == 0)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			if (array[low] == value)
				return (low);
			return (-1);
		}

		/* Estimate the position using interpolation formula */
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));

		/* Print the value being compared */
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	printf("Value checked array[%d] is out of range\n", high);
	return (-1);
}
