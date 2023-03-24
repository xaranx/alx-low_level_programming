#include "main.h"
#include <stdio.h>
/**
 * fizz_buzz - multiples of three print Fizz instead of the number
 * multiples of five print Buzz
 * multiples of both three and five print FizzBuzz
 *
 * Return: Fizz, Buzz, FizzBuzz
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 5 == 0) && (i % 3 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
