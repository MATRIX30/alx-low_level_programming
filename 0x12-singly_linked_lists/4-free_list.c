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
	temp = *head;

	while (temp)
	{
		free(temp->str);
		temp->len = 0

	}
}
