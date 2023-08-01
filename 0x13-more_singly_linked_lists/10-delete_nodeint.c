#include "lists.h"
#include <stdlib.h>

/**
* insert_nodeint_at_index - function to insert node at position idx
* @head: pointer to the head of the linked list
* @idx: index where element should be added
* @n: element to add 
* Return: address to the newly added element
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int num = 0;
	listint_t *temp, *next;

	if (head == NULL)
	{
		return (-1);
	}

	temp = *head;
	while(temp)
	{
		if (index == 0)
		{
			next = (*head)->next;
			free(*head);
			*head = next;
			return (1);
		}
		if (num + 1 == index)
		{
			next = temp->next->next;
			free(temp->next);
			temp->next = next;
			return (1);
		}
		temp = temp->next;
		num++;
	}
	return (-1);
}
