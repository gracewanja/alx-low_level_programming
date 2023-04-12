#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of the program
 * @ac: the argument count
 * @av: an array of strings containing the arguments
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, l, len, total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
			len++;
		total_len += len + 1;
	}
	str = malloc(total_len * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0, l = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
		{
			str[l++] = av[i][len++];
		}
		str[l++] = '\n';
	}
	str[l] = '\0';

	return (str);
}

