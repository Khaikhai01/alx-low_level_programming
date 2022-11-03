#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void checkread(int e, char *av);
void checkwrite(int e, char *av);

/**
 * main - copies content from one file to another
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 97 when ac is incorrect
 * 98 if file doesn't exist
 * 99 if you cannot write and create file
 * 100 if you do not close the file descriptor
 */

int main(int ac, char **av)
{
	int fd1, fd2, w, cl1, cl2, r = 1024;
	char buf1[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	fd1 = open(av[1], O_RDONLY);
	checkread(fd1, av[1]);

	fd2 = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 00664);
	checkwrite(fd2, av[2]);

	while (r == 1024)
	{
		r = read(fd1, buf1, sizeof(buf1));
		w = write(fd2, buf1, r);
	}

	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	cl1 = close(fd1);
	if (cl1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}

	cl2 = close(fd2);
	if (cl2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}

	return (0);
}
/**
 * checkread - checks for errors and prints them to STDERR
 *
 * @e: exit status
 * @av: pointer to the file name
 *
 * Return: 0 (Successful)
 */

void checkread(int e, char *av)
{
	if (e == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av);
		exit(98);
	}
}


/**
 * checkwrite - checks for errors and prints them to STDERR
 *
 * @e: exit status
 * @av: pointer to the file name
 * Return: 0 (Successful)
 */

void checkwrite(int e, char *av)
{
	if (e == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av);
		exit(99);

	}
}
