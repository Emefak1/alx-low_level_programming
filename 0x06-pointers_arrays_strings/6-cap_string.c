#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
#include <ctype.h>

char *cap_string(char *str)
{
	int i;
	int capitalize_next = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (capitalize_next && islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
		capitalize_next = isspace(str[i]) ||
			str[i] == ',' ||
			str[i] == ';' ||
			str[i] == '.' ||
			str[i] == '!' ||
			str[i] == '?' ||
			str[i] == '"' ||
			str[i] == '(' ||
			str[i] == ')' ||
			str[i] == '{' ||
			str[i] == '}';
	}
	return (str);
}
