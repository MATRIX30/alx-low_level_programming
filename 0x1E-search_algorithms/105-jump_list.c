#include "search_algos.h"
/**
 * jump_list - function to perform jump search on a linked list
 * @list: pointer to head of list to search in
 * @size: size of the linked list
 * @value: value to search for in linked list
 * Return: pointer to the first node where value is located or NULL otherwise
*/
listint_t *jump_list(listint_t *list, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *start;
	int jump;

	jump = (int)sqrt(size);
	if (list == NULL)
	{
		return (NULL);
	}
	while (list->n < value && list->index < size && list->next != NULL)
	{
		start = list;

		while (list->index != start->index + jump &&  list->next != NULL)
		{
			list = list->next;
		}
		printf("Value checked at index [%ld] = [%d]\n", list->index, list->n);
	}
	if (list->next == NULL)
	{
		list->index = size - 1;
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
	 start->index, list->index);

	while (start->index <= list->index)
	{
		printf("Value checked at index [%ld] = [%d]\n", start->index, start->n);
		if (start->n == value)
		{
			return (start);
		}
		if (start->next == NULL)
		{
			break;
		}
		start = start->next;
	}
	return (NULL);
}
