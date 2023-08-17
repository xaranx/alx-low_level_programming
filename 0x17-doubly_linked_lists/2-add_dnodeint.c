#include "lists.h"
#include <stdlib.h>


/**
 * add_dnodeint - add new node at the biginning
 * @n: data of the new node
 * @head: pointer to the head of the list
 *
 * Return: the address of the new element, or NULL if it failed
 *
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	if (!head)
		return (NULL);
	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return (NULL);
	temp->n = n;
	temp->prev = NULL;
	temp->next = *head;
	if (*head)
	{
		(*head)->prev = temp;
	}
	*head = temp;
	return (temp);
}
