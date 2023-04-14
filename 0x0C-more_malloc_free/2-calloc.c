#include "main.h"
#include <stdlib.h>

/**
 * _bzero - fills memory with a constant byte
 * @dst: pointer
 * @size: of the memory
 *  Return: pointer to memory
 */

void *_bzero(void *dst, unsigned int size)
{
	char *d = dst;

	do
		* d++ = 0;
	while (--size != 0);

	return (d);
}



/**
 * _calloc - allocates memory for an array
 * @nmemb: array length
 * @size: size of each element
 *  Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (!nmemb || !size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);

	_bzero(ptr, nmemb * size);
	return (ptr);

}
