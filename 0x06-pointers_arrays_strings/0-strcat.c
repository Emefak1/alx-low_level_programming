#include "main.h"
/**
 * _strcat - link two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest++ = *src++;
	}

	*dest = '\0';

	return (result);
}
