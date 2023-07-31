#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint_end - adds a node to the end of the list
* @head: pointer to the head
* @n: number to add at the end of the linked list
* Return: pointer to the newly added element
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp)
		{
			if (temp->next == NULL)
			{
				temp->next = new_node;
				return (new_node);
			}
			temp = temp->next;
		}
	}
	return (new_node);
}
