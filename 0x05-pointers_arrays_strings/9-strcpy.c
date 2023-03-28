#include "main.h"

/**
 * _strcpy - a function that checks for uppercase character
 *@src :source to be printed
 *@dest : destination to be printed
 * Return:dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
