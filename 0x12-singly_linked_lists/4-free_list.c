#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* free_list - function to free linked list
* @head: head of linked list
*/

void free_list(list_t *head)
{
	list_t *temp;
	list_t *next;

	temp = head;
	while (temp)
	{
		free(temp->str);
		temp->len = 0;
		next = temp->next;
		free(temp);
		temp = next;

	}
}
