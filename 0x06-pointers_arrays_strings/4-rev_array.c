#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 *@n: is the number of elements of the array
 *@a: array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int start, end, temp;

	for (start = 0, end = (n - 1); start < end; start++, end--)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
