#include "main.h"
#include <string.h>

/**
 * _strspn - gets the legnth of a prefix substring
 * @s: a pointer to the substring to be searched
 * @accept: charaters to be searched
 * Return: number of bytes in both
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
