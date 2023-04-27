#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - prints the length of the list
 * @h: a pointer to the node
 * Return: the length
 */
size_t list_len(const list_t *h)
{
	unsigned long int len = 0;
	const list_t *s;

	s = h;
	while (s != NULL)
	{
		len++;
		s = s->next;
	}
	return (len);
}
