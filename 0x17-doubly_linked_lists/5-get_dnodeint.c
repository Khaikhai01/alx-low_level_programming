#include "lists.h"

/**
 *
 *
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int n = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (n != index)
	{
		n++;
		temp = temp->next;
	}
	return (temp);
}
