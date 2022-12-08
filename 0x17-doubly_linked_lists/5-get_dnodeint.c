#include "lists.h"

/**
 *get_dnodeint_at_index - function that returns the nth node
 *@head: head node
 *@index: index to retrieve
 *
 *Return: address of the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int n = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (temp && n!= index)
	{
		n++;
		temp = temp->next;
	}
	return (temp);
}
