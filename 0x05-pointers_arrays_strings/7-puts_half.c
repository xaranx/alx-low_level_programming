#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line
 * *@str: the number to be checked
 * Return: void
 */
void puts_half(char *str)
{
	int i;

	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	if (i % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
