#include "lists.h"
#include <stdio.h>

/**
 *  list_len- count length of list
 *@h: pointero first node
 * Return:size of list
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
