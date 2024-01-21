#include "search_algos.h"
/**
 * linear_skip - linear search on a skiplist
 * @list: the skiplist to be searched
 * @value: the value to look for in the skiplist
 * Return: pointer to first node where value match or NULL otherwise
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *low;

	if (list == NULL)
	{
		return (NULL);
	}
	while (list->express != NULL && list->n < value)
	{
		low = list;
		list = list->express;
		printf("Value checked at index [%ld] = [%d]\n", list->index, list->n);
	}
	if (list->express == NULL)
	{
		low = list;
		/*list->index = size - 1;*/
		while (list->next != NULL)
		{
			list = list->next;
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
	 low->index, list->index);

	while (low->index <= list->index)
	{
		printf("Value checked at index [%ld] = [%d]\n", low->index, low->n);
		if (low->n == value)
		{

			return (low);
		}
		if (low->next == NULL)
		{
			break;
		}
		low = low->next;
	}
	return (NULL);
}
