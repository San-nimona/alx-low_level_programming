#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in list.
 * @head: A pointer to the head of the list
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp1, *temp2;

	if (head == NULL || head->next == NULL)
		return (NULL);

	temp1 = head->next;
	temp2 = (head->next)->next;

	while (temp2)
	{
		if (temp1 == temp2)
		{
			temp1 = head;

			while (temp1 != temp2)
			{
				temp1 = temp1->next;
				temp2 = temp2->next;
			}

			return (temp1);
		}

		temp1 = temp1->next;
		temp2 = (temp2->next)->next;
	}

	return (NULL);
}
