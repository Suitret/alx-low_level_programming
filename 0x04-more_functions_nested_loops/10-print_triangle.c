#include <stdio.h>
#include "main.h"

/**
 * print - print characters ' ' and '#'
 * @a: times for ' '
 * @b: times for '#'
 * Return: void
 */

void print(int a, int b)
{
	int i;

	for (i = 0; i < a; i++)
		_putchar(' ');
	for (i = 0; i < b; i++)
		_putchar('#');
}

/**
 * print_triangle - print a triangle made of '#'
 * @size: lenght of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i = 0, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		j = 1;
		for (i = 0; i < size; i++)
		{
			print(size - j, j);
			j++;
			_putchar('\n');
		}
	}
}
