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
	dlistint_t *tmp = *h;

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

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (tmp)
	{
		if (i == idx)
		{
			if (tmp->next == NULL)
			{
				return (add_dnodeint_end(&tmp, n));
			}
			new_node->next = tmp;
			new_node->prev = (tmp)->prev;
			(tmp->prev)->next = new_node;
			(tmp)->prev = new_node;
			return (new_node);
		}
		tmp = tmp->next;
		i += 1;
	}
	return (NULL);
}
