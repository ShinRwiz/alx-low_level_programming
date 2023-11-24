#include "main.h"
/**
 * print_binary --
 * @n: --
 * Return: --
*/
void print_binary(unsigned long int n)
{
	int i = sizeof(unsigned long int) * 8 - 1, p = 0;

	if (n == 0)
		_putchar('0');
	for (; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			p = 1;
		}
		else if (p)
			_putchar('0');
	}
}
