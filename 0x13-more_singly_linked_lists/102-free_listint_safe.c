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
	}
	while (temp)
	{
		node_count++;
		temp = *h;
		*h = (*h)->next;
		free(temp);
		if (temp <= *h)
		{
			free(*h);
		}
	}
	h = NULL;
	return (node_count);
}
