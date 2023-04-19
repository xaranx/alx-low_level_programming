#include "function_pointers.h"

/**
 * print_name - function print name
 *@name : name to be printed
 *@f: printing function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
