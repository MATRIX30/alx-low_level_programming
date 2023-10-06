#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to retrieve values from
 * @key: key of element to retrieve
 * Return: a value associated withe element or NULL if key couldn't be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash_digest;
	hash_node_t *insert_head;

	/* verify if valid inputs have been sent*/
	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	/*hash the key to get the postion on hash table*/
	hash_digest = key_index((const unsigned char *)key, ht->size);
	insert_head = ht->array[hash_digest];
	
	/*loop through looking for that element*/
	while (insert_head)
	{
		if (strcmp(insert_head->key, key) == 0)
		{
			return (insert_head->value);
		}
		insert_head = insert_head->next;
	}
	return (NULL);
}