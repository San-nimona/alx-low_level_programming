#include "main.h"

/**
 * _memset - a function similar to memset
 * @s: the memory area
 * @b: the value to be put
 * @n: the bytes to be filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
