#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node
 * at index of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node that should be deleted
 * Return: Returns: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	prev = NULL;
	for (i = 0; i < index; i++)
	{
		if (current == NULL)
			return (-1);
		prev = current;
		current = current->next;
	}
	if (prev == NULL)
		*head = current->next;
	else
		prev->next = current->next;
	free(current);
	return (1);
}
