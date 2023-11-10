#include "variadic_functions.h"
/**
 * sum_them_all --
 * @n: --
 * Return: --
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, s = 0;

	va_list x;
	va_start(x, n);
	if (!n)
		return (0);

	for (i = 0; i < n; i++)
		s += va_arg(x, int);
	va_end(x);
	return (s);
}
