#include "main.h"

/**
 * main - Entry point
 * Description: -
 * Return: Always O (Success)
 */
 int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
