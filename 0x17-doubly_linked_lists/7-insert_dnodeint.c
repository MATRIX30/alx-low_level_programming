#include "lists.h"
/**
* insert_dnodeint_at_index - function to insert at a given index
* @h: pointer to the head pointer
* @idx: index to add node
* @n: node data
* Return: address of new node or NULL otherwise
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node;

	if (*h == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	while (*h)
	{
		if (i == idx)
		{
			new_node->next = *h;
			new_node->prev = (*h)->prev;
			((*h)->prev)->next = new_node;
			(*h)->prev = new_node;
			return (new_node);
		}
		(*h) = (*h)->next;
		i += 1;
	}
	return (NULL);
}
