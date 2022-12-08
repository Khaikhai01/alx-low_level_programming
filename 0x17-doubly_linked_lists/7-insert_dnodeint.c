#include "lists.h"

/**
 *insert_dnodeint_at_index - a function that inserts a new
 *node at a given position.
 *@h: head node.
 *@idx: index of the list where the new node should
 *be added. Index starts at 0
 *@n: integer parameter.
 *
 *Returns: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	new->prev = NULL;
	new->n = n;
	new->next = NULL;
	if (!*h)
	{
		if (idx == 0)
		{
			*h = new;
			return (new);
		}
		return (NULL);
	}
	temp = *h;
	while (temp && count < idx)
	{
		temp = temp->next;
		count++;
	}
	new->next = temp->next;
	temp->next = new;
	new->prev = temp;
	new->next->prev = new;
	return (new);
}
