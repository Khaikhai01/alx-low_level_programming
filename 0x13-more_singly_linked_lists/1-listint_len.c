#include "lists.h"

/**
 *listint_len - prints number of elements in list
 *@h: head
 *
 *Return: the number of elements in a linked listint_t list.
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);

}
