#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	printf("value returned: %d\n",hash_table_set(ht, "betty", "cool"));
	printf("value returned: %d\n",hash_table_set(ht, "mentioner", "cool"));
	printf("value returned: %d\n",hash_table_set(ht, "hetairas", "cool"));
	printf("value returned: %d\n",hash_table_set(ht, "depravement", "cool"));
	printf("value returned: %d\n",hash_table_set(ht, "depravement", "cool"));
	return (EXIT_SUCCESS);
}
