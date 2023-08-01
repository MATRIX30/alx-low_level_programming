#include "lists.h"
#include <stdlib.h>
/**
* free_listint2 - function to free a linked list
* @head: pointer to the head pointer
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
	{
		free(head);
	}
	else
	{
		temp = *head;
		while (temp)
		{
			*head = temp->next;
			free(temp);
			temp = *head;
		}
	}
	head = NULL;


}
