#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at index index
 * @head: the starting node
 * @index: the node to be deleted
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new, *temp = *head;
	unsigned int node;

	if (temp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (temp->next == NULL)
			return (-1);

		temp = temp->next;
	}

	new = temp->next;
	temp->next = new->next;
	free(new);
	return (1);
}
