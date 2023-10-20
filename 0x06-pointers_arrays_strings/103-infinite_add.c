#include "main.h"
/**
 * infinite_add --
 * @n1: --
 * @n2: --
 * @r: --
 * @size_r: --
 * Return: --
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num1, num2, sum, carry = 0, i = 0, j = 0, k = 0;

	while (n1[i] != '\0' || n2[j] != '\0' || carry)
	{
		num1 = (n1[i] != '\0') ? n1[i] - '0' : 0;
		num2 = (n2[j] != '\0') ? n2[j] - '0' : 0;
		sum = num1 + num2 + carry;
	if (k < size_r - 1)
	{
		r[k] = (sum % 10) + '0';
		k++;
	}
	else
	{
		r[k] = '\0';
		return (0);
	}
	carry = sum / 10;
		if (n1[i] != '\0')
			i++;
		if (n2[j] != '\0')
			j++;
	}
	r[k] = '\0';
	return (r);
}
