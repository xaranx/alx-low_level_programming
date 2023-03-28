#include "main.h"
#include <string.h>
/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character
 *@str: the number to be checked
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
