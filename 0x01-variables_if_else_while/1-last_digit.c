#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: 1-
 * Return: Always O (Success)
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int l_d;

	l_d = n % 10;
	printf("Last digit of %d is %d ", n, l_d);
	if (l_d > 5)
		printf("and is greater than 5");
	if (l_d == 0)
		printf("and is 0");
	if (l_d < 6 && l_d != 0)
		printf("and is less than 6 and not 0");
	printf("\n");
	return (0);
}
