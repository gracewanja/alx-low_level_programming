#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: the number of arguments
 * @av: the arguments
 *
 * Return: a pointer to the new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, m, len = 0, n = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (m = 0; av[i][m]; m++)
			len++;
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (m = 0; av[i][m]; m++)
			str[n++] = av[i][m];
		str[n++] = '\n';
	}
	str[n] = '\0';

	return (str);
}

