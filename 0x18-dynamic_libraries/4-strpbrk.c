#include "main.h"
#include <string.h>

/**
 * _strpbrk - a function similar to sprpbrk
 * @s: a pointer to the string to be checked
 * @accept: the characters to be matched
 * Return: the characters that have matched
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
