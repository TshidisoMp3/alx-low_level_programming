#include "main.h"
#include <stdlib.h>

/**
 * wordCounterRec - count num of words recursively
 * @str: pointer to char
 * @i: current index
 *
 * Return: number of words
 */

int wordCounterRec(char *str, int i)
{
	if (str[i] == '\0')
		return (0);
	if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
		return (1 + wordCounterRec(str, i + 1));
	return (wordCounterRec(str, i + 1));
}

/**
 * word_counter - counts number of words in 1d array of strings
 * @str: pointer to char
 *
 * Return: number of words
 */
int word_counter(char *str)
{
	if (str[0] != ' ')
		return (1 + wordCounterRec(str, 0));
	return (wordCounterRec(str, 0));
}

/**
 * strtow - splits a string into words.
 * @str: string to be splitted
 *
 * Return: pointer to an array of strings (words) or null
 */

char **strtow(char *str)
{
	char **strDuppy;
	int ti, ni, mome, wordsz;

	if (str == NULL || str[0] == 0)
		return (NULL);
	wordsz = word_counter(str);
	if (wordsz < 1)
		return (NULL);
	strDuppy = malloc(sizeof(char *) * (wordsz + 1));
	if (strDuppy == NULL)
		return (NULL);
	ti = 0;
	while (ti < wordsz && *str != '\0')
	{
		if (*str != ' ')
		{
			ni = 0;
			while (str[ni] != ' ')
				ni++;
			strDuppy[ti] = malloc(sizeof(char) * (ni + 1));
			if (strDuppy[ti] == NULL)
			{
				while (--ti >= 0)
					free(strDuppy[--ti]);
				free(strDuppy);
				return (NULL);
			}
			mome = 0;
			while (mome < ni)
			{
				strDuppy[ti][mome] = *str;
				mome++, str++;
			}
			strDuppy[ti][mome] = '\0';
			ti++;
		}
		str++;
	}
	strDuppy[ti] = '\0';
	return (strDuppy);
}
