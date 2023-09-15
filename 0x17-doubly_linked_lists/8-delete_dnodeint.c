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
	dlistint_t *tmp;
	dlistint_t *n = *head;

	if (*head == NULL)
		return (-1);

	while (n)
	{
		if (i == index)
		{
			tmp = n;
			n = n->prev;
			n->next = tmp->next;
			tmp->next->prev = n;
			return (1);
		}
		n = n->next;
	}
	return (-1);
}
