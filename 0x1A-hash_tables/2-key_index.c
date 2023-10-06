#include "hash_tables.h"
/**
 * key_index - function that returns the index of a key
 * @key: key of type string
 * @size: the size of the array of hash table
 * Return: the index at which the key/value pair should be stored
 * in the array of the hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_digest;

	if (key == NULL || size == 0)
	{
		exit(EXIT_FAILURE);
	}
	/*calculate the hash value*/
	hash_digest = hash_djb2(key);
	
	/*value mode size to ensure the result is not more than hash table size*/
	return (hash_digest % size);
}
