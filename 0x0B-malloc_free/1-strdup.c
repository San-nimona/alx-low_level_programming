#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a new string which is a duplicate of the string str
 * @str: the string
 * Return: a pointer to the copy
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int len = 0;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
		len++;
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
