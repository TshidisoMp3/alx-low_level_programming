#include "main.h"

/**
 * _strcpy - its a function that is able to copy the string pointed to by src,
  including the terminating null byte (\0), to the buffer pointed
  to by dest
 *
 * @src: its a char pointer variable
 * @dest: its a char pointer variable
 *
 * Return: a sequence of characters
 */

char *_strcpy(char *dest, char *src)
{
	int rt, jx;

	rt = 0;
	while (src[rt] != '\0')
	{
		rt++;
	}

	for (jx = 0; jx <= rt; jx++)
	{
		*(dest + jx) = *(src + jx);
	}

	return (dest);
}
