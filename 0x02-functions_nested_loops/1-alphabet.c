#include "main.h"

/**
 * main - Entry point
 * Description: -
 * Return: Always O (Success)
 */
 void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
