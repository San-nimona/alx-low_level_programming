#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: len of 2nd string to be concatenated
 * Return: a pointer to the location of the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, s2_len = 0;
	unsigned int s1_len = strlen(s1);
	/*unsigned int s2_len = strnlen(s2, n);*/

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; i < n && s2[i] != '\0'; i++)
		s2_len++;
	s = (char *)malloc(sizeof(char) * (s1_len + s2_len) + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		*(s + i) = *(s1 + i);
	for (i = 0; i < (s1_len + s2_len); i++)
		*(s + (s1_len + i)) = *(s2 + i);
	*(s + (s1_len + s2_len)) = '\0';
	return (s);
}
