#include "lists.h"

/**
 *sum_dlistint - function that returns the sum of all the data (n)
 *@head: head node
 *
 *Return: sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (0);
	}
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
