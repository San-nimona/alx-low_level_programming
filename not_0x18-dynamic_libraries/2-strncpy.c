#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: str 1
 * @src: str 2
 * @n: len of str
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (src[i] != '\0' && i < n); i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
