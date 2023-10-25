#include "main.h"
/**
 * finder --
 * @n: --
 * @c: --
 * Return: --
 */
int finder(int n, int c)
{
	if (c * c > n)
		return (1);
	if (n % c == 0)
		return (0);

	return (finder(n, c + 1));
}
/**
 * is_prime_number --
 * @n: --
 * Return: --
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (finder(n, 2));
}
