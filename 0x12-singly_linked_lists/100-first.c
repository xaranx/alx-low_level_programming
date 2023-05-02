#include <stdio.h>

/**
 * beformain -  prints string before the main() function is executed
 */

__attribute__((constructor))
void beformain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
