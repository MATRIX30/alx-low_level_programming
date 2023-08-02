#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
* print_listint_safe - function that prints a linked list and handles loops
* @head: pointer to the head node
* Return: the number of elements printed
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		node_count++;
		if (head <= head->next)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			exit(98);
		}
		head = head->next;
	}
	return (node_count);
}
