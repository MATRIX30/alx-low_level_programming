#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_listint - function to print elements of a linked list
* @h: head pointer to the linked list
* Return: the size of the linked list
*/

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node_count += 1;
		h = h->next;
	}
	return (node_count);
}
