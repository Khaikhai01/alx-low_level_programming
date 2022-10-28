#include "lists.h"

/**
 *pop_listint -  function that deletes the head node
 *of a listint_t linked list, and returns the head node’s data (n).
 *@head: head
 *Return: 0 if linked list if empty.
 *        the head node's data.
 */

int pop_listint(listint_t **head)
{
	listint_t *delNode;
	int copyN = 0;

	delNode = malloc(sizeof(listint_t));
	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		delNode = *head;
		*head = (*head)->next;
		delNode->n = copyN;
	}
	free(delNode);

	return (copyN);
}
