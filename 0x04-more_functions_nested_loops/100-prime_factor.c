#include "main.h"
/**
 * main - function find prime factors of a number
 * Return: factors number
 */

int main(void)
{
	long n = 612852475143;

	int i;

	long maxf;

	i = 2;
	while ((i * i) <= n)
	{
		if (n % i == 0)
		{
			maxf = i;
			n = n / i;
		}
		else
		{
			i++;
		}
	}
	if ((n > 1) && (n >= maxf))
	{
		maxf = n;
	}
	printf("%ld\n", maxf);

	return (0);
}
