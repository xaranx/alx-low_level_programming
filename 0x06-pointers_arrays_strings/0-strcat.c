#include "main.h"
#include <string.h>
/**
 * _strcat - function that concatenates two strings
 * @dest: destination to be printed
 * @src: source to be printed
 * Return: return 2 strings
 */

char *_strcat(char *dest, char *src)
{
	int len = strlen(dest);

	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
