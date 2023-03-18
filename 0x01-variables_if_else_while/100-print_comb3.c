#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	i = 48;
	j = 48;
	while (i <= 56)
	{
		int k;

		k = j + 1;
		while (k <= 57)
		{
			putchar(i);
			putchar(k);
			k++;
			putchar(44);
			putchar(20);
		}
		i++;
		j++;
	}
	putchar('\n');
	return (0);
}
