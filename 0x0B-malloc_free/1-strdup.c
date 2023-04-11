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
	unsigned int i;

	if (str == NULL)
		return (NULL);
	s = malloc(sizeof(str) + 1);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < sizeof(str))
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
