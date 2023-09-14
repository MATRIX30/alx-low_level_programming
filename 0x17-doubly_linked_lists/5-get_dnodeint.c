#include "lists.h"
/**
* get_dnodeint_at_index - gets a node at a given index
* @head: pointer to the head of the list
* @index: index of node in the list to return
* Return: node at a given index NULL otherwise
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	if (head == NULL)
		return (NULL);
	while (head)
	{
		if (i == index)
			return head;
		head = head->next;
		i += 1;

	}
	return (NULL);
}
