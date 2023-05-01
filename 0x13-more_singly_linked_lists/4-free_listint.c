#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees the list
 * @head: the starting node
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
