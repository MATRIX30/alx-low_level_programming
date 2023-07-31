#include "lists.h"
#include <stdlib.h>

/**
* get_nodeint_at_index - function to return node at an index
* @head: pointer to head node
* @index: node index
* Return: node at index
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head)
	{
		if (n == index)
		{
			return (head);
		}
		n++;
		head = head->next;
	}
	return (NULL);
}
