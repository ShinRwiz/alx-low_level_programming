#include "main.h"
/**
 * print_rev --
 * @s: --
 * Return: --
 */
void print_rev(char *s)

	int a, b, n;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	n = a;

	for (b = n - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}

	_putchar('\n');
}
