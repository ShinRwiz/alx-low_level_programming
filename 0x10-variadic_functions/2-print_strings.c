#include "variadic_functions.h"
/**
 * print_strings --
 * @separator: --
 * @n: --
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int i;
	va_list x;

	va_start(x, n);

	if (!separator)
		separator = "";
	for (i = 0; i < n; i++)
	{
		s = va_arg(x, char*);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(x);
}
