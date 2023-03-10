#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer on char
 * @accept: string to identify
 * Return: lenght
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
