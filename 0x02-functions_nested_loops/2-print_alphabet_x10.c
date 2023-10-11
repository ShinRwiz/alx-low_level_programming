#include "main.h"

/**
 * main - Entry point
 * Description: -
 * Return: Always O (Success)
 */
 void print_alphabet_x10(void)
{
	int cnt = 0;
	char letter;

	for (cnt++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
