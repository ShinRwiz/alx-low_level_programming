#include "main.h"
#include <stdlib.h>
/**
 * print_number --
 * @n: --
 * Return: --
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
/**
 * _atoi --
 * @s: --
 * Return: --
 */
int _atoi(char *s)
{
	unsigned int n = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);

	return (n * sign);
}
/**
 * _puts --
 * @str: --
 * Return: --
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
/**
 * main --
 * @argc: --
 * @argv: --
 * Return: --
 */
int main(int argc, char *argv[])
{
	long int a;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	a = (_atoi(argv[1]) * _atoi(argv[2]));
	print_number(a);
	_putchar('\n');
	return (0);
}
