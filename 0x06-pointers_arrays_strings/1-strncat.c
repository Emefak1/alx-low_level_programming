#include "main.h"
/**
 * _strncat - link two strings
 * usung at mooost n bytes for src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest)
	{
		dest++;
	}

	while (n-- && *src)
	{
		*dest++ = *src++;
	}

	*dest = '\0';

	return (result);
}
