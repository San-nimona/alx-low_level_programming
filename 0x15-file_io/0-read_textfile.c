#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads the contents of file and print
 * @filename: the name of the file
 * @letters: size of text
 * Return: 0 or actual size of text
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, i, j;
	char *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(letters);
	if (buff == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	i = read(fd, buff, letters);
	if (i == -1)
	{
		free(buff);
		return (0);
	}
	close(fd);
	j = write(STDOUT_FILENO, buff, i);
	if (j == -1 || i != j)
	{
		free(buff);
		return (0);
	}
	return (j);
}
