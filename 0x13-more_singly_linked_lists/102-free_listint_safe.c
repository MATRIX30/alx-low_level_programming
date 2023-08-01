#include "main.h"
#include <stdlib>
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
	temp = *head;
	while (temp)
	{
		node_count++;
	}

	head = NULL;
}
