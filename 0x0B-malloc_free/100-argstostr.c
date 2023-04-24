#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, n, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);

	if (str == NULL)
	{
		return (NULL);
	}
       	(i = 0); i++;
	return (str);
}
