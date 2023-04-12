#include "main.h"
#include <stdlib.h>

/**
 * w_len - end of the first word
 * @str: string to be searched
 *
 * Return: end of 1st word
 */
int w_len(char *str)
{
	int i, len = 0;

	for (i = 0; *(str + i) && *(str + i) != ' '; i++)
		len++;
	return (len);
}

/**
 * word_count - Counts the number of words contained within a string.
 * @str: The string to be searched.
 *
 * Return: The number of words contained within str.
 */
int word_count(char *str)
{
	int i, words = 0, len = 0;

	for (i = 0; *(str + i); i++)
		len++;

	i = 0;
	while (i < len)
	{
		if (str[i] != ' ')
		{
			words++;
			i += w_len(str + i);
		}
		i++;
	}

	return (words);
}

/**
 * strtow - Splits strings to words
 * @str: The string to be split
 *
 * Return: a pointer to an array or NULL
 */
char **strtow(char *str)
{
	char **s;
	int i = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = word_count(str);
	if (words == 0)
		return (NULL);

	s = malloc(sizeof(char *) * (words + 1));
	if (s == NULL)
		return (NULL);

	w = 0;
       	while (w < words)
	{
		while (str[i] == ' ')
			i++;

		letters = w_len(str + i);

		s[w] = malloc(sizeof(char) * (letters + 1));

		if (s[w] == NULL)
		{
			for (; w >= 0; w--)
				free(s[w]);

			free(s);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			s[w][l] = str[i++];

		s[w][l] = '\0';
		w++;
	}
	s[w] = NULL;

	return (s);
}
