#include "hash_tables.h"


hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr;

	if (size == NULL)
		return NULL;

	ptr = malloc(sizeof(size));

}
