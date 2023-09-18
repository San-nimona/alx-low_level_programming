#include "main.h"
#include <string.h>

/**
 * _strchr - a function similar to strchr
 * @s: the string
 * @c: the character to be checked
 * Return: pointer to first occurence of c or NULL
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
