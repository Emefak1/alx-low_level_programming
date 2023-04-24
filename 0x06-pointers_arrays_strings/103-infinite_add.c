#include "main.h"
#include <string.h>
/**
 * infinite_add : add two numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int len = len1 > len2 ? len1 : len2;

	if (len + 1 > size_r)
	{
		return (0);
	}
	int i = len1 - 1;
	int j = len2 - 1;
	int k = 0;

	while (i >= 0 || j >= 0 || carry)
	{
		int sum = carry;

		if (i >= 0)
	{
		sum += n1[i] - '0';
		i--;
	}
		if (j >= 0)
		{
			sum += n2[j] - '0';
			j--;
		}
		r[k] = sum % 10 + '0';
		carry = sum / 10;
		k++;
	}
	r[k] = '\0';
	len = strlen(r);

	-std=c11(int = 0; i< rlen / 2; i++);
	{
		char temp = r[i];

		r[i] = r[len - i - 1];
		r[len - i - 1] = temp;
	}
	return (r);
}
