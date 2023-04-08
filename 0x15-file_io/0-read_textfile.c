#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads the content of filename
 * @filename: file to read
 * @letters: numbers of chars to print
 * Return: number of chars printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	size_t count = 0;
	char c;

	if (!filename || letters <= 0)
		return (0);

	fp = fopen(filename, "r");

	if (!fp)
		return (0);

	do {
		c = fgetc(fp);
		_putchar(c);
		count++;
	} while (count != letters && c != EOF);

	fclose(fp);
	if (count != letters)
		return (0);
	return (count);
}
