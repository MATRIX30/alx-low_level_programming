#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
* get_loop_node - function to get where a loop occurs in a linked list
* @head: pointer to the first element of the list
* Return: pointer to node where loop occurs
*/
const listint_t *get_loop_node(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
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
/**
* print_listint_safe - function that prints a linked list and handles loops
* @head: pointer to the head node
* Return: the number of elements printed
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	/*const listint_t *temp;*/
	const listint_t *loop_node;
	int loop_flag = 0;

	loop_node = get_loop_node(head);
	if (loop_node == NULL)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			node_count++;
			/* temp = head;*/
			head = head->next;
		}
	}
	else
	{
		while (head)
		{
			if (head == loop_node && loop_flag <= 1)
			{
				loop_flag += 1;
			}
			if (loop_flag <= 1)
			{
				printf("[%p] %d\n", (void *)head, head->n);
				node_count++;
				/*temp = head;*/
				head = head->next;
			}
			else
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				break;
			}
		}
	}
	return (node_count);
}
