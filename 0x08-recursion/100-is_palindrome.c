#include "main.h"
/**
 * sizer --
 * @s: --
 * Return: --
 */
int sizer(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + sizer(s + 1));
}
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

	return (comparer(s, i + 1,  j  - 1));
}
/**
 * is_palindrome --
 * @s: --
 * Return: --
 */
int is_palindrome(char *s)
{
	int size = sizer(s);

	return (comparer(s, 0, size - 1));
}
