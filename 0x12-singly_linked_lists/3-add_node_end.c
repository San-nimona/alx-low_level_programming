#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a node to the end of the list
 * @head: the node to be added
 * @str: data of the node
 * Return: the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current_node;
	char *s;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	s = strdup(str);
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	new_node->str = s;
	if (*head == NULL)
		*head = new_node;
	else
	{
		current_node = *head;
		while (current_node != NULL)
		{
			if (current_node->next == NULL)
			{
				current_node->next = new_node;
				break;
			}
			current_node = current_node->next;
		}
	}
	return (new_node);
}
