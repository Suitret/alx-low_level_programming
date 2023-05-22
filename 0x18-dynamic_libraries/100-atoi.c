#include "main.h"
#include <limits.h>

/**
 * _atoi - converts string into integer
 * @s: pointer on char
 * Return: integer obtained
 */

int _atoi(char *s)
{
	int sign = 1, digit = 0;
	int num = 0;
	int max_num = INT_MAX / 10;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign = -sign;
		}
		else if (*s >= '0' && *s <= '9')
		{
			if (num > max_num || ((num == max_num) && (digit > INT_MAX % 10)))
			{
				break;
			}
			num = num * 10 + (*s - '0');
		}
		else if (num != 0)
		{
			break;
		}
		s++;
	}
	return (sign * num);
}
