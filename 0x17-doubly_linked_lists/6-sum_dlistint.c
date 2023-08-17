#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - returnsum of all data in list
 * @head: pointer to the head
 * Return: sum of data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
