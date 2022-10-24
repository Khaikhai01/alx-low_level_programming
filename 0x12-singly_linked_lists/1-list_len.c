#include "lists.h"

/**
 *list_len - prints number of elements in list
 *@h: head
 *
 *Return: the number of elements in a linked list_t list.
 */

size_t list_len(const list_t *h)
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
