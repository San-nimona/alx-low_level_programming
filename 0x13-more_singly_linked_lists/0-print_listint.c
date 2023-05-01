#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints the list
 * @h: the starting node
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int size = 0;

	if (h == NULL)
		return (size);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
