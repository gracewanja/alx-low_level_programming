#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int len1 = 0, len2 = 0, i = 0, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	result = malloc(sizeof(char) * (len1 + len2 + 1));
	if (result == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}

	while (s2[k] != '\0')
	{
		result[i] = s2[k];
		i++;
		k++;
	}

	result[i] = '\0';

	return (result);
}

