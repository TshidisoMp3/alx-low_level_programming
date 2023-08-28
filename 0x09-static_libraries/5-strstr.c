#include "main.h"

/**
* _strstr - the function location
* @haystack: the pointer to char
* @needle: the pointer to char
* Return: 0
*/

char *_strstr(char *haystack, char *needle)
{
	char *outcomes = haystack, *hneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (outcomes);
		}
		needle = hneedle;
		outcomes++;
		haystack = outcomes;
	}
	return (0);
}
