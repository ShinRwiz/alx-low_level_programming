#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name --
 * @name: --
 * @f: --
 * Return: --
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
