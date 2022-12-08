#include "lists.h"

/**
 * print_dlistint - prints all elements ofa linked list
 * @h: head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t n = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		n++;
	}
	return (n);
}
