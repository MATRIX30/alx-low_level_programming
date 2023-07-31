#include "lists.h"
#include <stdlib.h>

/**
* pop_listint - function to pop the first element of a linked list
* @head: pointer to the head pointer
* Return: element that is pop from the list
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (*head == NULL)
	{
		return (0);
	}

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
