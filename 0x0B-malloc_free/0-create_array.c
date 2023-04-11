#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array
 * @size: sie of array
 * @c: the character
 * Return: NULL or success
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
