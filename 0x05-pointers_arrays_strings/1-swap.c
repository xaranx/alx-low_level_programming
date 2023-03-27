#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 *@a: number to be swaped
 *@b: number to be swaped
 * Return: return a and b
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

