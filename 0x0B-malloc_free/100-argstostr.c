#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates arguments of a program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: a pointer to a new string, or NULL
 */
char *argstostr(int ac, char **av)
{
	char *str, *s;
	int i, j, p, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		s = av[i];
		j = 0;
		while (s[j++])
			len++;
		len++;
		i++;
	}

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac && j < len; i++)
	{
		s = av[i];
		p = 0;

		while (s[p])
		{
			str[j] = s[p];
			p++;
			j++;
		}
		str[j++] = '\n';
	}
	str[j] = '\0';

	return (str);
}
