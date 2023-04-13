#include "main.h"
#include <stdlib.h>


/**
 * malloc_checked -function that allocates memory using malloc
 * @b: int
 *  Return: void
 */

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == NULL)
	{
		exit(98);
	}
	return (0);
}
