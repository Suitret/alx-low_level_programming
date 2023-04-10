#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * error1 - first error
 * Return: void
 */
void error1(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * error2 - second error
 * @file: file
 * Return: void
 */
void error2(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * error3 - third error
 * @file: file
 * Return: void
 */
void error3(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}

/**
 * error4 - fourth error
 * @fd: file descriptor
 * Return: void
 */
void error4(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * main - check the code
 * @ac: number of arguments
 * @av: arguments
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd1, fd2;
	char tab[1024];
	ssize_t rOut, wOut, cOut;

	if (ac != 3)
		error1();

	fd1 = open(av[1], O_RDONLY | O_EXCL);
	fd2 = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd1 == -1)
		error2(av[1]);
	if (fd2 == -1)
		error3(av[2]);
	do {
		rOut = read(fd1, tab, 1024);
		if (rOut == -1)
			error2(av[1]);
		wOut = write(fd2, tab, rOut);
		if (wOut == -1)
			error3(av[2]);
	} while (rOut > 0);
	cOut = close(fd1);
	if (cOut == -1)
		error4(fd1);
	cOut = close(fd2);
	if (cOut == -1)
		error4(fd2);

	return (0);
}
