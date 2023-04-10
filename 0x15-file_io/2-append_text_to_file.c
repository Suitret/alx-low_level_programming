#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - appends the content to the file
 * @filename: file to write
 * @text_content: content of the file 'filename'
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t rp;
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_APPEND | O_EXCL | O_WRONLY);

	if (fd == -1)
		return (-1);

	rp = write(fd, text_content, sizeof(text_content));
	if (rp == -1)
		return (-1);

	close(fd);

	return (1);
}
