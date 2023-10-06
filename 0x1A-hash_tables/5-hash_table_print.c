#include "hash_tables.h"

/**
 * hash_table_print - function to print a hash table
 * @ht: hash table to print
 *
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_node;
	int flag = 0;

	/* Testing to see if ht  or its array is NULL*/
	if (ht == NULL || ht->array == NULL)
	{
		return;
	}

	printf("{");
	/*iterate over all the hash table values*/
	for (i = 0; i < ht->size; i++)
	{
		/*if an entry is NULL continue to next entry*/
		if (ht->array[i] == NULL)
		{
			continue;
		}
		/*if entry is not NULL print all Key:value in entry*/
		current_node = ht->array[i];
		while (current_node)
		{
			if (flag == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", current_node->key, current_node->value);
			flag = 1;
			current_node = current_node->next;
		}
	}
	printf("}\n");

}
