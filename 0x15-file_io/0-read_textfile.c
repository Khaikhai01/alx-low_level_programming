#include "main.h"

/**
 * read_textfile - reads a textfile and printd it
 * to the POSIX
 * @filename: pointer to filename
 * @letters: number of bytes to be read
 *
 * Return: ssize_t of letters it could read and print
 * 0 if NULL or write fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	size_t w = 0, i;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	i = read(fd, buf, letters);
	buf[i] = '\0';

	w = write(STDOUT_FILENO, buf, i);
	free(buf);
	close(fd);
	if (w == i)
		return (w);
	else
		return (0);
}
