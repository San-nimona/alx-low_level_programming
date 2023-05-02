#include "lists.h"

/**
 * reverse_listint - Reverses a list
 * @head: the starting node
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp1, *temp2;

	if (head == NULL || *head == NULL)
		return (NULL);

	temp2 = NULL;

	while ((*head)->next != NULL)
	{
		temp1 = (*head)->next;
		(*head)->next = temp2;
		temp2 = *head;
		*head = temp1;
	}

	(*head)->next = temp2;

	return (*head);
}
