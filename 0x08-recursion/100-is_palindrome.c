#include "main.h"

/**
 * get_strlen - finds length of a string.
 * @s: The string
 *
 * Return: the string length
 */
int get_strlen(char *s)
{
	int len = 0;

	if (s[len])
	{
		len++;
		len += get_strlen(s + len);
	}

	return (len);
}

/**
 * check_pal - Checks if a string is a palindrome
 * @s: string to be checked.
 * @len: length of string
 * @i: index of str
 *
 * Return: 1 or 0.
 */
int check_pal(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);

	if (s[i] == s[len - i - 1])
		return (check_pal(s, len, i + 1));

	return (0);
}

/**
 * is_palindrome - Check if palindrome
 * @s: the string to be checked.
 *
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len = get_strlen(s);

	if (!(*s))
		return (1);

	return (check_pal(s, len, i));
}

