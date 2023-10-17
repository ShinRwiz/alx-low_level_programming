#include "main.h"
/**
 * puts2 --
 * @str: --
 * Return: --
 */
void puts2(char *str)
{
	int i, t;

	t = 0;

	while (str[t] != '\0')
	{
		t++;
	}

	for (i = 0; i < t; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
