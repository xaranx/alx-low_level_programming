#include "lists.h"

/**
 * _strlen - function return the length of the string
 *@s: the string length to check
 * Return: integer of string length
 */


int _strlen(char *s)
{
	int i = 0;

	if (!s)
	{
		return (0);
	}
	while (*s++)
	{
		i++;
	}
	return (i);
}

/**
 * print_list - prints a lists
 *@h: pointero first node
 * Return: intger size of node
 */


size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
