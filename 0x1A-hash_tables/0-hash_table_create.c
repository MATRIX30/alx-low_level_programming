#include "hash_tables.h"
/**
 * hash_table_create - function to create a new hash table
 * @size: the size of the hash table array
 * Return: a pointer to the newly created hash table or NULL
 * if something went wrong
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table = NULL;
	unsigned long int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	new_hash_table = (hash_table_t *)malloc(sizeof(hash_table_t));

	/*verify if malloc failed and return NULL*/
	if (new_hash_table == NULL)
	{
		return (NULL);
	}
	/* if it passed assign NULL to all the positions of the hash table*/
	new_hash_table->size = size;
	new_hash_table->array = (hash_node_t **) malloc(sizeof(hash_node_t *) * size);

	/*check if allocating memory for hash table array fails*/
	if (new_hash_table->array == NULL)
	{
		free(new_hash_table);
		return (NULL);
	}
	/* loop through all positions of array and initialize them to NULL*/
	for (i = 0; i < size; i++)
	{
		new_hash_table->array[i] = NULL;
	}

	/*return the created hash table*/
	return (new_hash_table);
}
