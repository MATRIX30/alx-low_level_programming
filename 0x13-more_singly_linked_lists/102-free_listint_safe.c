#include "lists.h"
#include <stdlib.h>
/**
* free_listint_safe - function to free list with loops
* @h: pointer to the head pointer
* Return: number of items freed
*/

size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0;
	listint_t *temp;



	if (h == NULL)
	{
		free(h);
		return (node_count);
	}
	while (*h)
	{
		node_count++;
		if (*h <= (*h)->next)
		{
			free(*h);
			break;
		}
		temp = (*h);
		(*h) = (*h)->next;
		free(temp);
	}
	*h = NULL;
	return (node_count);
}
