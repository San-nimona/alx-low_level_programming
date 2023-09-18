#include <stdio.h>
/**
 * _strcpy - check the code
 * @dest: the destination
 * @src: the source
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	char ch;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		ch = *(src + i);
		*(dest + i) = ch;
	}
	*(dest + i) = '\0';
	return (dest);
}
