#include "lists.h"

/**
 * print_list - prints a lists
 *@h: pointero first node
 * Return:size of list
 */


size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
			printf("[0] (nil)\n");
		h = h->next;
		i++;
	}
	return (i);
}
