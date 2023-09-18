#include "main.h"
#include <string.h>

/**
 * _strstr - searches for a substring in another string
 * @haystack: the main string
 * @needle: the substring
 * Return: the substring in main string
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
