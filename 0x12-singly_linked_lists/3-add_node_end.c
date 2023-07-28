#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* add_node_end - adds a node to the end  of a linked list
* @head: pointer to the head
* @str: string value
* Return: pointer to the list
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;

	temp = *head;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);

	if (*head == NULL)
	{
		/* list is empty */
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	else
	{
		while (temp)
		{
			if (temp->next == NULL)
			{
				new_node->next = NULL;
				temp->next = new_node;
				return (new_node);
			}
			temp = temp->next;
		}
	}
	return (new_node);
}
