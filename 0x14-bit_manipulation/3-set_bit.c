#include "main.h"
/**
 * set_bit --
 * @n: --
 * @index: --
 * Return: --
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= (1 << index)));
}
