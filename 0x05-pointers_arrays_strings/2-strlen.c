#include "main.h"
#include <string.h>
/**
 * _strlen -function that returns the length of a string
 *@s : string
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != 0)
	{
		s++;
		length++;
	}
	return (length);
}
