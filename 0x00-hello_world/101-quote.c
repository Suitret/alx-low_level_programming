#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
	char *m = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, m, strlen(m));
	return (1);
}

