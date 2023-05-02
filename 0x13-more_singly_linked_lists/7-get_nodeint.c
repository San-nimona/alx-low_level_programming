#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - gets the nth node
 * @head: the starting node
 * @index: the nth index
 * Return: the address of the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count != index)
	{
		if (head == NULL)
			return (NULL);
		count++;
		head = head->next;
	}
	return (head);
}
