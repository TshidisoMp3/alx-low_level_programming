#include <stdlib.h>

/**
* strtow - splits a string into words.
* @str: pointer to string to be splitted
* Return:  a pointer to the string, or NULL if it fails.
*/
char **strtow(char *str)
{
	int tow = 0, rt = 0, mj = 0, klk, wlength;
	char **newStr, *temp;

	if (str == NULL || !*str)
		return (NULL);
	while (*(str + rt))
	{
		if (*(str + rt) != ' ')
			if (*(str + rt + 1) == ' ' || *(str + rt + 1) == '\0')
				tow++;
		++rt; }
	if (tow == 0)
		return (NULL);
	newStr = malloc(++tow  * sizeof(char *));
	if (newStr == NULL)
		return (NULL);
	while (*str)
	{
		while (*str == ' ' && *str)
			++str;
		wlength = 0;
		while (*(str + wlength) != ' ' && *(str + wlength))
			++wlength;
		temp = malloc((wlength + 1) * sizeof(char));
		if (temp == NULL)
		{
			for (; mj - 1 >= 0; mj--)
				free(newStr[mj]);
			free(newStr);
			return (NULL); }
		for (klk = 0; klk < wlength; ++klk)
			*(temp + klk) = *str++;
		*(temp + klk) = '\0';
		*(newStr + mj) = temp;
		if (mj < tow - 1)
			mj++; }
	*(newStr + mj) = NULL;
	return (newStr);
}
