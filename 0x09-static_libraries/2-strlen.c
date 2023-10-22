#include "main.h"

/**
 *_strlen - the funtion that returns the string length
 *@S: the string
 *
 *Return: the string length
*/

int _strlen(char *s)
{
  int longsi=0;

  while(*s!='\0')
  {
       longsi++;
       s++;
  }

  return (longsi);
}
