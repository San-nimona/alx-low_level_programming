#include "main.h"
/**
 * _strncat - concatenates 2 strings
 * @dest: string 1
 * @src: string 2
 * @n: byte size
 * Return: pointer to new string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_src = 0;
	int j, i = 0;
	int len_dest = 0;

	for (j = 0; dest[j] != '\0'; j++)
		len_dest++;
	while (src[len_src] != '\0' && i < n)
	{
		dest[len_dest] = src[len_src];
		len_src++;
		len_dest++;
		i++;
	}
	return (dest);
}
