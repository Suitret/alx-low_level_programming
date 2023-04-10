#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - creates a file with 'text_content'
 * @filename: file to write
 * @text_content: content of the file 'filename'
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t rp;
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY | O_EXCL, 0600);

	if (fd == -1)
		return (-1);

	rp = write(fd, text_content, sizeof(text_content));
	if (rp == -1)
		return (-1);

	close(fd);

	return (1);

