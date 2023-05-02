#include "lists.h"
#include <string.h>

/**
 *_strlen - count the length of a string
 *@s: string to be mesured
 * Return:length
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}


/**
 * add_node_end - add node at the end
 *@head: poiter to the he
 *@str: the string to be duplicated
 * Return:the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
	return (new);
}
