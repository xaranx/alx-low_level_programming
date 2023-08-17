#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print all element of a list dlistint
 * @h: pointer to the head of list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		++i;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
