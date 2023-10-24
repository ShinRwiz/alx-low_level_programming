#include "main.h"
#include <stdio.h>
/**
 * print_diagsums --
 * @a: --
 * @size: --
 * Return: --
 */
void print_diagsums(int *a, int size)
{
	int s1 = 0, s2 = 0, i;

	for (i = 0; i < size; i++)
	{
		s1 += a[(size * i) + i];
		s2 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", s1, s2);
}
