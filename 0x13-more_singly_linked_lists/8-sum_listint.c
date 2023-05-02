#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - sums all the data
 * @head: starting node
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		if (head == NULL)
			return (0);
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
