#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if ((i >= 48) && (i < 57))
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
