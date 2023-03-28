#include "main.h"

/**
 * print_array -function that prints n elements of an array of integers
 *@a : array of integer to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; a[i] < a[n]; i++)
	{
		if (a[i] != a[n - 1])
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
