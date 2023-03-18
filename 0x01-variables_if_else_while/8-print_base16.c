#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n, a;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	for (a = 0; a <= 5; a++)
	{
		putchar(a + 97);
	}
	putchar('\n');
return (0);
}
