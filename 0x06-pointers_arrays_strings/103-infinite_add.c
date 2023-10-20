#include "main.h"
/**
 * reset_to_98 --
 * @n: --
 * Return: --
 */

<<<<<<< HEAD
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
		return (0);
	}
	carry = sum / 10;
	if (n1[i] != '\0')
	{
		i++;
	}
	if (n2[j] != '\0')
	{
		j++;
	}
	}
	r[k] = '\0';
	if (carry)
	{
		if (k < size_r - 1)
		{
			r[k] = carry + '0';
			k++;
		}
		else
		{
		return (0);
		}
<<<<<<< HEAD
=======
		carry = sum / 10;
		if (n1[i] != '\0') i++;
		if (n2[j] != '\0') j++;
>>>>>>> parent of 3a2cdf0 (suffering)
	}
	r[k] = '\0';
	return (r);
}
=======
>>>>>>> parent of bb56b73 (suffering)
