#include "main.h"
#include <stdlib.h>
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
	
	if (argc != 3)
	{
		_puts("Error")
		exit(98);
	}
	return (0);
}
