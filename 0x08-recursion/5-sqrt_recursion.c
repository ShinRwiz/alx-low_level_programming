#include "main.h"
/**
 * finder --
 * @n: --
 * @i: --
 * Return: --
 */
int finder(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (finder(n, i + 1));
}
/**
 * _sqrt_recursion --
 * @n: --
 * Return: --
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (finder(n, 0));
}
