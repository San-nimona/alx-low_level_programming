#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * print_list - prints the data
 * @h: a pointer to the first node to be printed
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned long int i = 0;
	const list_t *s = NULL;

	s = h;
	while (s != NULL)
	{
		i++;
		if (s->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%ld] %s\n", strlen(s->str), s->str);
		s = s->next;
	}
	return (i);
}
