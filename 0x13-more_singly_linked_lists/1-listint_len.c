#include "lists.h"
#include <stddef.h>
/**
* listint_len - function to return the length of a linked list
* @h: head pointer of the linked list
* Return: number of elements int the linked list
*/

size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
