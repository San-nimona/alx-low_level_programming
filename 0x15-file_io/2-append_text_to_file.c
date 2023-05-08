#include "main.h"
#include <string.h>
/**
 * append_text_to_file - appends content at the EOF
 * @filename: name of the file
 * @text_content: content to be appended
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n, i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (text_content == NULL)
		text_content = "";
	n = strlen(text_content);
	i = write(fd, text_content, n);
	if (fd == -1 || i == -1)
		return (-1);
	close(fd);
	return (1);
}
