#include "main.h"
#include <stdlib.h>

/**
 * word_count - Counts the number of words in a string
 * @str: The string
 * Return: The number of words in string
 */
static int word_count(char *str)
{
	int count = 0, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			count++;
		}
	}

	return (count);
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 * Return: NULL if str == NULL or str == "" or
 * if function fails, it should return NULL
 */
char **strtow(char *str)
{
	char **words;
	int word_len, i, l, k, q;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	words = malloc(sizeof(char *) * (word_count(str) + 1));
	if (words == NULL)
	{
		return (NULL);
	}

	for (i = 0, q = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			for (l = i, word_len = 0; str[l] != '\0' && str[l] != ' '; l++)
			{
				word_len++;
			}
			words[q] = malloc(sizeof(char) * (word_len + 1));
			if (words[q] == NULL)
			{
				for (k = 0; k < q; k++)
				{
					free(words[k]);
				}
				free(words);
				return (NULL);
			}
			for (l = 0; l < word_len; l++)
			{
				words[q][l] = str[i + l];
			}
			words[q][l] = '\0';
			q++;
			i += word_len - 1;
		}
	} words[q] = NULL;
	return (words); }
