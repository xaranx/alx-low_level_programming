#include "main.h"
#include <stdio.h>

/**
 * isDelimiter - determine whether the ASCII is a delimiter
 * @c: character
 *
 * Return: 1 if true and 0 if false
 */
int isDelimiter(char c)
{
	int i;
	char delimiters[] = " \t\n,.!?\"{}()";

	for (i = 0; i < 13; i++)
	{
		if (c == delimiters[i])
			return (1);
	}
	return (0);
}

/**
 * cap_string - function that capitalizes the first character of each word
 * @s: input string
 *
 * Return: modified string with first character of each word capitalized
 */
char *cap_string(char *s)
{
	int foundDelimiter = 1;
	char *ptr = s;

	while (*s)
	{
		if (isDelimiter(*s))
		{
			foundDelimiter = 1;
		}
		else if (foundDelimiter)
		{
			if (*s >= 'a' && *s <= 'z')
			{
				*s -= 32;
			}
			foundDelimiter = 0;
		}
		s++;
	}
	return (ptr);
}
