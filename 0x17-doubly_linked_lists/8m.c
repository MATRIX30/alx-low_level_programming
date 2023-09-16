#include "lists.h"
/**
* delete_dnoteint_at_index - function to delete from an dlist
* @head: pointer to the head
* @index: index of node to be deleted
* Return: 1 if succeeded -1 if failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp, *tmp2;
	dlistint_t *prev;

	if (*head == NULL)
		return (-1);
	if ((*head)->next == NULL)
	{
		free(*head);
		return (1);
	}
	tmp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(*head);
	}
	
	while (tmp->next)
	{
		if (i == index)
		{
			prev = tmp->prev;
			prev->next = tmp->next;
			tmp->next->prev = prev;
			
			tmp = NULL;
			return (1);

		}
		tmp = tmp->next;
		if (tmp->next == NULL)
		{
			tmp2 = tmp->prev;
			tmp2->next = NULL;
		 
			tmp = NULL;
			return (1);
		}
		i += 1;
	}
	return (-1);
}
