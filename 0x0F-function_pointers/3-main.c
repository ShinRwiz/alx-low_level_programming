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

	if (argc != 4)
	{
		printf("Error\n"), exit(98);
	}

	opf = get_op_func(argv[2]);

	if (!opf)
	{
		printf("Error\n"), exit(99);
	}

	printf("%d\n", opf(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
