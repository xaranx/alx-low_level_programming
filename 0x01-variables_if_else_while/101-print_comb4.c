#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	i = 48;
	j = 49;
	k = 50;
	while (i <= 55)
	{
		while (j <= 56)
		{
			while (k <= 57)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55)
					break;
				putchar(44);
				putchar(32);
				k++;
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i + 1;
		k = j + 1;
	}
	putchar('\n');
	return (0);

}
