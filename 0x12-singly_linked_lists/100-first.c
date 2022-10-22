#include <stdio.h>

/**
 * fn to print before main is executed
 */

void __attribute__((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
