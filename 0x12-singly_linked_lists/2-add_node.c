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
 * add_node - add node at the beginning
 *@head: poiter to the head
 *@str: the string to be duplicated
 * Return:the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
