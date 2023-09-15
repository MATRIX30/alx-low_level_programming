#include "lists.h"
/**
* insert_dnodeint_at_index - inserts node at a given index
* @h: head ponter
* @idx: index
* @n: number
* Return: pointer to head
*/


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp = *h;
	unsigned int i;

	if (!h)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = tmp;
		new_node->prev = NULL;
		if (tmp)
			tmp->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	for (i = 0; tmp && i < idx - 1; i++)
		tmp = tmp->next;

	if (!tmp)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = tmp->next;
	new_node->prev = tmp;
	if (tmp->next)
		tmp->next->prev = new_node;
	tmp->next = new_node;

	return (new_node);
}

