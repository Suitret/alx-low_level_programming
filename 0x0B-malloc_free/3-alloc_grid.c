#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **p_h, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	p_h = (int **)malloc(height * sizeof(int *));

	if (p_h == NULL)
		return (p_h);

	for (i = 0; i < height; i++)
	{
		p_h[i] = (int *)malloc(width * sizeof(int));

		if (p_h[i] == NULL)
			return (p_h[i]);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p_h[i][j] = 0;
		}
	}

	return (p_h);
}
