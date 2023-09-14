#include "main.h"
/**
 * _strcmp - compares 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: the difference
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, r;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			break;
		}
		else
			r = s1[i] - s2[i];
		i++;
	}
	return (r);
}
