#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning
 * @head: the first node
 * @n: the data of the new node
 * Return: address of the new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = NULL;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (*head);
}
