#include "lists.h"

/**
 *print_listint - prints list.
 *@h: list
 *
 *Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}

	return (x);
}
