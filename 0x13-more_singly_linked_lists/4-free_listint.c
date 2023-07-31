#include "lists.h"
#include <stdlib.h>
/**
* free_listint - functiont to free a linked list
* @head: pointer to the head of the linked list
*/

void free_listint(listint_t *head)
{
	listint_t *temp, *next_node;

	temp = head;

	if (temp == NULL)
	{
		free(temp);
	}
	else
	{
		while (temp)
		{
			next_node = temp->next;
			free(temp);
			temp = next_node;
		}
	}

}
