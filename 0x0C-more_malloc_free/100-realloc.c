#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates memory block
 * @ptr: pointer to contents
 * @new_size: new size
 * @old_size: old size
 * Return: a pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	char *cpy, *s;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	cpy = ptr;
	new_ptr = malloc(sizeof(*cpy) * new_size);

	if (new_ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	s = new_ptr;

	for (i = 0; i < old_size && i < new_size; i++)
		s[i] = *cpy++;

	free(ptr);
	return (new_ptr);
}
