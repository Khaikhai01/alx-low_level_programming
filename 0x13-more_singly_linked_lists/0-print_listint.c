#include "lists.h"

/**
 *print_listint - prints all the elements of a listint_t list.
 *@h: head
 *
 *Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		x++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (x);
}
