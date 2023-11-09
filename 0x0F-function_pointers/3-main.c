#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main --
 * @argc: --
 * @argv: --
 * Return: --
 */
int main(int argc, char **argv)
{
	int (*opf)(int, int);
	int n1, n2;

	if (argc != 4)
	{
		printf("Error\n"), exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	opf = get_op_func(argv[2]);

	if (!opf)
	{
		printf("Error\n"), exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && n2 == 0)
	{
		printf("Error\n"), exit(100);
	}

	printf("%d\n", get_op_func(opf)(n1, n2));
	return (0);
}
