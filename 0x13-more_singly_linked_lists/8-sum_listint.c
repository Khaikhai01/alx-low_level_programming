#include "lists.h"


/**
 *sum_listint - returns the sum of all the data (n) of a listint_t linked list
 *@head: head
 *Return: sum of all th data, or 0 if empty
 */

int sum_listint(listint_t *head)
{
	int n = 0;

	while (head != NULL)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}
