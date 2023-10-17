#include "main.h"
/**
 * _strlen --
 * @s: --
 * Return: --
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;

	return (n);
}
