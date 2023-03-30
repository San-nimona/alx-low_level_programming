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
	int len_src = 0;
	int i;
	int len_dest = 0;
	for (i = 0; (src[i] != '\0' && i < n); i++)
	{
		dest[len_dest] = src[len_src];
		len_src++;
		len_dest++;
	}
	while (i < n)
	{
		dest[len_dest] = '\0';
		i++;
	}
	return (dest);
}
