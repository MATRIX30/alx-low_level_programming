#include "lists.h"
#include <stdlib.h>

/**
* insert_nodeint_at_index - function to insert node at position idx
* @head: pointer to the head of the linked list
* @idx: index where element should be added
* @n: element to add 
* Return: address to the newly added element
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp;
	listint_t *next;
	unsigned int position = 0;

	temp = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	while (temp)
	{
		if (position + 1 == idx)
		{
			next = temp->next;
			temp->next = new_node;
			new_node->next = next;
			return (new_node);
		}
		position++;
		temp = temp->next;
	}
	return (NULL);
}
