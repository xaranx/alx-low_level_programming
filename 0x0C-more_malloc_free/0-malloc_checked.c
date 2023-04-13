#include "main.h"
#include <stdlib.h>


/**
 * malloc_checked -function that allocates memory using malloc
 * @b: int
 *  Return: return pointer to the array ot NULL
 */

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == NULL)
	{
		exit(98);
	}
	return (m);
}
