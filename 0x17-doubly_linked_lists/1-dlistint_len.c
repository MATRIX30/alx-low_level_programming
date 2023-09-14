#include "lists.h"
/**
* dlistint_len - function to calculate length of  doubly linked list
* @h: head pinter
* Return: the size of the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (count);
	}
	while (h)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}
