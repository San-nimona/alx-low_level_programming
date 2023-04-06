#include "main.h"
/**
 * strlen_wo_wilds - ignore wildcard characters
 * @s: The string to be measured.
 *
 * Return: length.
 */
int strlen_wo_wilds(char *s)
{
	int len = 0;
	int i = 0;

	if (*(s + i))
	{
		if (*s != '*')
			len++;

		i++;
		len += strlen_wo_wilds(s + i);
	}

	return (len);
}

/**
 * find_wild - finds a non-wildcard character
 * @wildstr: The string
 */
void find_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		find_wild(wildstr);
	}
}

/**
 * postfix_match - matches strings
 * @s: The string to be matched
 * @postfix: the string after
 *
 * Return: a char
 */
char *postfix_match(char *s, char *postfix)
{
	int str_len = strlen_wo_wilds(s) - 1;
	int postfix_len = strlen_wo_wilds(postfix) - 1;

	if (*postfix == '*')
		find_wild(&postfix);

	if (*(s + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(s, postfix));
	}

	return (postfix);
}

/**
 * wildcmp - Compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: 0 or 1
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		find_wild(&s2);
		s2 = postfix_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
