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
	const listint_t *temp;

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		node_count++;
		temp = head;
		head = head->next;
		if (temp <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}
	return (node_count);
}
