#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: num
 * Return: Always O (Success)
 */
int print_last_digit(int n)
{
	int nb = n % 10;

	if (nb < 0)
		nb *= -1;

	_putchar(nb + '0');

	return (nb);
}
