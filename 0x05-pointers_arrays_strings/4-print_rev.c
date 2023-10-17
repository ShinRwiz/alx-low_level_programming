#include "main.h"
/**
 * print_rev --
 * @s: --
 * Return: --
 */
void print_rev(char *s)
{
	int i, n;

	while (s[n] != '\0')
	{
		n++;
	}
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
