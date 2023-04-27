#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a node to the beginning of the list
 * @head: the old head
 * @str: contents of old head
 * Return: a pointer to the new head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = NULL;
	char *new_str;

	new_head = malloc(sizeof(list_t));
	if (new_head == NULL)
		return (NULL);
	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(new_head);
		return (NULL);
	}
	new_head->next = *head;
	new_head->str = new_str;
	*head = new_head;
	return (*head);
}
