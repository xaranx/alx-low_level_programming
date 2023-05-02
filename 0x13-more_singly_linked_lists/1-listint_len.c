#include "lists.h"

/**
 * listint_len - prints number of elements of a listint_t list
 * @h: pointer to the head of the list
 * Return: number of element
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
