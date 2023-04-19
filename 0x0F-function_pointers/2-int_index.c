#include "function_pointers.h"

/**
 * int_index - search fior integer
 *@array: the in array
 *@size: the array size
 *@cmp:the compare function
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size && array && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);

}
