#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads the content of filename
 * @filename: file to read
 * @letters: numbers of chars to print
 * Return: number of chars printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t ro, rp;
	char *tab = malloc(letters + 1);
	int fd;

	if (!filename || letters == 0 || !tab)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	ro = read(fd, tab, letters);
	tab[ro] = '\0';
	if (ro == -1)
		return (0);

	rp = write(STDOUT_FILENO, tab, ro);
	if (rp == -1)
		return (0);

	free(tab);
	close(fd);

	if (ro == rp)
		return (ro);

	return (0);
}
