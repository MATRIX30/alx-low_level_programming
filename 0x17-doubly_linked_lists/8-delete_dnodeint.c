#include "lists.h"
/**
* delete_dnodeint_at_index - function to delete from an dlist
* @head: pointer to the head
* @index: index of node to be deleted
* Return: 1 if succeeded -1 if failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *prev = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	while (current != NULL && i < index)
	{
		prev = current;
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (-1);
	if (prev == NULL)
		*head = current->next;
	else
		prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = prev;
	free(current);
	return (1);
}

