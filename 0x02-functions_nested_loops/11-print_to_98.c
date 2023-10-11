#include <stdio.h>
/**
 * main - Entry point
 * Description: -
 * Return: Always O (Success)
 */
 void print_to_98(int n)
{
	if (n == 98)
	{
		while (n > 98)
			printf("%d\n", n);
			return;
	}
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
			printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
			printf("%d\n", n);
	}
}

