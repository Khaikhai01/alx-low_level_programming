#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a new node at a given position.
 *@head: head
 *@inx: index of the list where the new node should be added
 *@n: integer n
 *Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter;
	listint_t *tmp;
	listint_t *tmp1;

	tmp1 = malloc(sizeof(listint_t));
	if (tmp1 == NULL)
	{
		return (NULL);
	}
	tmp1->n = n;

	if (*head == NULL)
	{
		return (NULL);
	}
	tmp = *head;

	if (idx != 0)
	{
		for (counter = 0; counter < idx - 1; counter++)
		{
			if (tmp != NULL)
				tmp = tmp->next;
		}
	}

	if (idx == 0)
	{
		tmp1->next = *head;
		*head = tmp1;
		return (tmp1);
	}
	else
	{
		tmp1->next = tmp->next;
		tmp->next = tmp1;
	}

	return (tmp1);
}
