#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
/**
 * hash_table_set - functions that adds an element to a hash table
 * @ht: hash table to which we want to add an element to
 * @key: key of the element to add
 * @value: of the element to add
 * Return: 1 on success and 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	unsigned long int index;
	hash_node_t *insert_head;

	if (key == NULL || strcmp(key, "") == 1 || ht == NULL)
	{
		return (0);
	}

	/*creating a new hash node element*/
	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	/* verify if memory allocation for new node with malloc failed and return 0*/
	if (new_node == NULL)
	{
		return (0);
	}
	/* copy values into fields of new node*/
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	/*I have not hanlde case of insufficient memory that will*/
	/* cause strdup to return NULL */
	new_node->next = NULL;

	/*hash the key to know the position to add node in the hash table*/
	index = key_index((const unsigned char *)key, ht->size);

	/*get the insertion position on the hash table*/
	insert_head = ht->array[index];

	/*verify if its NULL(empty) and add Node*/
	if (insert_head == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}
	/*verify if key already exist and update the value*/
	while (insert_head)
	{
		if (strcmp(insert_head->key, key) == 0)
		{
			insert_head->value = new_node->value;
			return (1);
		}
		insert_head = insert_head->next;
	}
	/* if insert position is not empty insert at head*/
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
