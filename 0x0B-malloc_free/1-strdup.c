#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: character
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *zzz;
	int i, j = 0;

	if (str == NULL)
		return (NULL);

	while (str[j])
		j++;

	zzz = malloc(sizeof(char) * (j + 1));

	if (zzz == NULL)
		return (NULL);

	for (i = 0; i <= j; i++)
		zzz[i] = str[i];

	return (zzz);
}
