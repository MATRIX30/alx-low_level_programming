#include "lists.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
* add_node - function to add a node to a linked list
* @head: head pointer
* @str: string pointer
* Return: pointer to a node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	/* creating new node in heep */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL || head == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);

	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (*head);

}
