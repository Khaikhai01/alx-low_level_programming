#include "lists.h"

/**
 *delete_nodeint_at_index -  function that deletes the node
 *at index index of a listint_t linked list
 *@head: head of list
 *@index: integer to index
 *
 *Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *del;
        unsigned int i;

        temp = *head;
        if (index == 0) 
	{
                *head = (*head)->next;
                temp->next = NULL;
                free(temp);
        }
        else
        {
                for (i = 0; i < index - 1; i++)
                {
                        temp = temp->next;
                }
        }
        del = temp->next;
        temp->next = temp->next->next;
        del->next = NULL;
        free(del);

	return (1);
}
