#include "hash_tables.h"

/**
 * node_delete - function to delete a node from a hash table
 * @node: node to delete
*/
void node_delete(hash_node_t *node)
{
	free(node->value);
	free(node->key);
	
}
/**
 * hash_table_delete - function to delete from a hash table
 * @ht: hash table to delete from
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_node, *tmp;


	/* Testing to see if ht  or its array is NULL*/
	if (ht == NULL || ht->array == NULL)
	{
		return;
	}

	/*iterate over all the hash table values*/
	for (i = 0; i < ht->size; i++)
	{
		/*if an entry is NULL continue to next entry*/
		if (ht->array[i] == NULL)
		{
			continue;
		}
		/*if entry is not NULL free the entire chain*/
		current_node = ht->array[i];
		while (current_node)
		{
			tmp = current_node;
			current_node = current_node->next;
			/*deleting a node*/
			node_delete(tmp);
		}
		free(ht->array);
		free(ht);
	}

}
