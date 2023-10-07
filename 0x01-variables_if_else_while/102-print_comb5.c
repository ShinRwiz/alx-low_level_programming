#include <stdio.h>

/**
 * main - Entry point
 * Description: 102-
 * Return: Always O (Success)
 */
int main(void)
{
	int n1, n2, n3, n4;

	for (n1 = 0; n1 <= 98; n1++)
	{
		for (n2 = n1 + 1; n2 <= 99; n2++)
		{
			n3 = n1 / 10;
			n4 = n1 % 10;
			putchar((n3 % 10) + '0');
			putchar((n4 % 10) + '0');
			putchar(' ');
			n3 = n2 / 10;
			n4 = n2 % 10;
			putchar((n3 % 10) + '0');
			putchar((n4 % 10) + '0');
			if (n1 != 98 || n2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
