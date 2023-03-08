#include <stdio.h>
#include <string.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: given string
 * Return: lenght
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
