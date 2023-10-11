#include "main.h"

/**
 * _isalpha - Entry point
 * @c: num
 * Return: Always O (Success)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
