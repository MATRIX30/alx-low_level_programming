#include "lists.h"
#include <stddef.h>
/**
* list_len - function to print the number of elements in a list
* @h: head pointer to list
* Return: Number of elemnts in list
*/
size_t list_len(const list_t *h)
{
	int number_of_elements = 0;
	if (h == NULL)
	{
		return (0);
	}
	while (h->next)
	{
		number_of_elements++;
		h = h->next;
	}
	number_of_elements++;
	return (number_of_elements);
}
