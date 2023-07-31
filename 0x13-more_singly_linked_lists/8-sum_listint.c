#include "lists.h"
/**
* sum_listint - function to sum elements of a linked list
* @head: pointer to first element
* Return: sum of elements
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (sum);
	}
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
