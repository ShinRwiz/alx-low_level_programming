#include "main.h"
/**
 * reverse_array --
 * @a: --
 * @n: --
 * Return: --
 */
void reverse_array(int *a, int n)
{
	int x, i = 0, t = n -1;

	while (i < t)
	{
		x = a[i];
		a[i] = a[t];
		a[t] = x;
		i++;
		t--;
	}
}
