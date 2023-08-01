#include "lists.h"
#include <stdlib.h>

/**
* reverse_listint - function to reverse a singly linked list
* @head: pointer to the head of the linked list
* Return: pointer to first node of the reversed linked list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *curr, *next;

	prev = NULL;
	curr = *head;
	next = *head;

	while (curr)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*head = prev;
	return (*head);
}
