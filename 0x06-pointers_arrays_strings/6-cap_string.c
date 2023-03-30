#include "main.h"
#include <stdio.h>

/**
 * isLower - Detirmine whether the ascii is lowercase
 *@c : character
 *Return: 1 if true and 0 if false
 */

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 *isDelimiter - determin whether the ascii is a delimiter
 *@c : character
 *Return: 1 if true and 0 if false
 */

int isDelimiter(char c)
{
	int i;

	char delimiter[] = "\t\n,.!?\"{}()";

	for (i = 0; i < 13; i++)
	{
		if (c == delimiter[i])
			return (1);
	}
	return (0);
}

/**
 * cap_string - function that capitalizes all words of a string
 *
 * @s : input string
 * Return: string with capital words
 */
char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimiter = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimiter = 1;
		else if (isLower(*s) && foundDelimiter)
		{
			*s -= 32;
			foundDelimiter = 0;
		}
		else
			foundDelimiter = 0;
		s++;
	}
	return (ptr);
}
