#include "main.h"

/**
 * main - Entry point
 * Description: -
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
