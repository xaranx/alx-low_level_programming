#include "main.h"

/**
 * _strcpy - a function that checks for uppercase character
 *@src :source to be printed
 *@dest : destination to be printed
 * Return:dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
		return (NULL);
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
