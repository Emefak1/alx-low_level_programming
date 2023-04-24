#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @str: pointer to string params
 *
 * Return: *str
 */
char *rot13(char *str)
{
	int i, j;
	char *alpha_upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *alpha_lower = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (str[i] == alpha_upper[j])
			{str[i] = alpha_upper[(j + 13) % 26];
				break;
			}
			else if (str[i] == alpha_lower[j])
			{
				str[i] = alpha_lower[(j + 13) % 26];
				break;
			}
		}
	}
	return (str);
}
