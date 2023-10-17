#include "main.h"
/**
 * swap_int --
 * @a: --
 * @b: --
 * Return: --
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
