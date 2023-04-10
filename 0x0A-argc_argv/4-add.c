#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints all arguments it receives
 * @argc : int
 * @argv : list
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *c;

	int sum = 0;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);

		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
