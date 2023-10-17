#include "main.h"
/**
 * print_rev --
 * @s: --
 * Return: --
 */
void print_rev(char *s)
{
	int i;
	int n;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
