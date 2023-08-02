#include "lists.h"
/**
* find_listint_loop - function that finds loop in a list
* @head: pointer to the head of the list
* Return: a pointer to the node where loop starts
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	while (fast && slow && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (fast <= slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}
	return (NULL);

}
