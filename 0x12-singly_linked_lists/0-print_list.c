#include "lists.h"

/**
 *print_list - prints all the elements of a list_t list.
 *@h: head
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t counter;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%u] %s\n", h->len, "(nil)");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		counter++;

	}
	return (counter);
}
