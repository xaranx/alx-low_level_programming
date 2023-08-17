#include "lists.h"
#include <stdlib.h>


/**
 * add_dnodeint_end - add new node at the end
 * @n: data of the new node
 * @head: pointer to the head of the list
 *
 * Return: the address of the new element, or NULL if it failed
 *
 */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *tp;

	if (!head)
		return (NULL);
	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (!*head)
	{
		temp->prev = NULL;
		*head = temp;
		return (temp);
	}
	tp = *head;
	while (tp->next)
	{
		tp = tp->next;
	}
	tp->next = temp;
	temp->prev = tp;
	return (temp);
}
