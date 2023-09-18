#include "main.h"
/**
 * _strlen - check the code
 * @s: for the string
 * Return: the value to be returned
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
