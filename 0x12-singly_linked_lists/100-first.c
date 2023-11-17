#include "lists.h"
void prinfirst(void) __attribute__ ((constructor));

/**
 * prinfirst - prints a sentence before the main
 */
void prinfirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
