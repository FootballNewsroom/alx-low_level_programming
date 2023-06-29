#include "main.h"

/**
 * infinite_add - add two numbers.
 * @n1: length of first input string.
 * @n2: length of second input strength.
 *
 * Return: pointer to r.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum = 0;
	int i, j, k;
	
	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;
	if (len1 > size_r - 1 || len2 > size_r - 1)
		return 0;
	i = len1 - 1;
	j = len2 - 1;
	k = size_r - 1;
	
	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		r[k] = (sum % 10) + '0';
		carry = sum / 10;
		i--;
		j--;
		k--;
	}
	r[size_r - 1] = '\0';
	return (r);
}

