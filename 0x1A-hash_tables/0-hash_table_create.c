#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: the size, in number of nodes, to make the new hash table.
 *
 * Return: a pointer to the newly created hash table.
 */


hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr;
	unsigned int i;

	ptr = malloc(sizeof(hash_table_t));
	if (ptr == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	ptr->size = size;
	ptr->array = malloc(sizeof(hash_node_t *) * size);
	if (ptr->array == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ptr->array[i] = NULL;
	return (ptr);
}
