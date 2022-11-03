#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: pointer to filename
 * @text_content: pointer to the text context
 *
 * Return: 1 on success
 * -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00400 | 00200);
	if (fd < 0)
		return (-1);

	w = write(fd, text_content, strlen(text_content));
	close(fd);

	if (w < 0)
		return (-1);
	else
		return (1);
}
