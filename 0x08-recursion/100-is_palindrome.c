#include "main.h"
/**
 * comparer --
 * @s: --
 * @i: --
 * @j: --
 * Return: --
 */
int comparer(char *s, int i, int j)
{
	if (i >= j)
		return (1);

	if (s[i] != s[j])
		return (0);

	return  (comparer(s, i + 1,  j  - 1));
}
/**
 * is_palindrome --
 * @s: --
 * Return: --
 */
int is_palindrome(char *s)
{
	int size = 0;

	while (s[size] != '\0')
		size++;

	return (comparer(s, 0, size - 1));
}
