#include "main.h"
#include <string.h>
/**
 * _strncat - function that concatenates two strings
 * @dest: destination to be printed
 * @src: source to be printed
 * @n : number max to print
 * Return: return 2 strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
