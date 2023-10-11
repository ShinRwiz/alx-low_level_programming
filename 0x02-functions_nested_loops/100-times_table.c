#include "main.h"
/**
 * print_times_table - Prints the times table of the input
 * @n: int n
 * Return: Always O (Success)
 */
void print_times_table(int n)
{
	int r, c, p;

	if (n >= 0 && n <= 15)
	{
		for (r = 0; r <= n; r++)
		{
			_putchar('0');

			for (c = 1; c <= n; c++)
			{
				_putchar(',');
				_putchar(' ');

				p = r * c;

				if (p <= 99)
					_putchar(' ');
				if (p <= 9)
					_putchar(' ');

				if (p >= 100)
				{
					_putchar((p / 100) + '0');
					_putchar(((p / 10)) % 10 + '0');
				}
				else if (p <= 99 && p >= 10)
				{
					_putchar((p / 10) + '0');
				}
				_putchar((p % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
