#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: a pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int len = 0, i, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i] ; i++)
		len++;
	s = malloc(len * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		s[j++] = s1[i];
	for (i = 0; s2[i]; i++)
		s[j++] = s2[i];
	return (s);
}
