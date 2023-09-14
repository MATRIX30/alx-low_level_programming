#include "lists.h"
/**
* sum_dlistint - sums elements of a doubly linked list
* @head: pointer to the head node
* Return: sum of all node data of the lsit
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
