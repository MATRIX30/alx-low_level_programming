#include "lists.h"
/**
* free_dlistint - function to free list
* @head: pointer to head
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
	{
		while ((head)->next)
		{
			tmp = head;
			head = head->next;
			tmp->next = NULL;
			tmp->prev = NULL;
			tmp->n = 0;
			free(tmp);
		}
		head->next = NULL;
		head->prev = NULL;
		head->n = 0;
		free(head);
	}
}
