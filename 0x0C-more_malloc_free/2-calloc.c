#include "main.h"
#include <stdlib.h>

/**
 * _calloc - assigns memory to array
 * @nmemb: no of elements
 * @size: size of memory
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	char *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	i = 0;
	s = array;
	while (i < (nmemb * size))
	{
		s[i] = '\0';
		i++;
	}
	return (array);
}
