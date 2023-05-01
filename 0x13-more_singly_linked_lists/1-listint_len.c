#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - returns the number of nodes
 * @h: the starting node
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int size = 0;

	if (h == NULL)
		return (size);
	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
