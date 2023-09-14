#include "lists.h"
/**
* print_dlistint - function to print all elements of doubly linked list
* @h: head pinter
* Return: the size of the list
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (count);
	}
	while (h)
	{
		printf("%d\n", h->n);
		count += 1;
		h = h->next;
	}
	return (count);
}
