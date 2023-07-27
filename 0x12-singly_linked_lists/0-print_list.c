#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
* print_list - function to print linked list
* @h: pointer to a list_t
* Return: the number of elements in the list
*/

size_t print_list(const list_t *h)
{
	size_t nodeCount = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h->next)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			nodeCount++;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			nodeCount++;
		}
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	nodeCount++;
	return (nodeCount);
}
