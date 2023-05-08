#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * create_file - creates a new file
 * @filename: name of the file
 * @text_content: content to be written
 * Return: 1 on succes and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n, i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	n = strlen(text_content);
	i = write(fd, text_content, n);
	if (i == -1)
		return (-1);
	close(fd);
	return (1);
}
