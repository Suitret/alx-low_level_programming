#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>

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
	int nbyte;

	if (!filename || letters <= 0)
		return (0);

	fp = fopen(filename, "r");

	if (!fp)
		return (0);

	while (count != letters && c != EOF)
	{
		c = fgetc(fp);
		nbyte = write(1, &c, 1);
		count++;
	}

	fclose(fp);
	if (nbyte != sizeof(char))
		return (0);
	return (count);
}
