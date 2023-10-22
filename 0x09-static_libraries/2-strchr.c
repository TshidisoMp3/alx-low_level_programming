#include "main.h"
#include <stddef.h>

/**
 *strchr -  The entry point
 *@s: The input
 *@c: Another input
 *
 *Return: 0 (success)
*/

char *_strchr(char *s, char c)
{
     int i=0;
     for (;s[i]>='\0';i++)
     {
           if (s[i]==c)
                   return(&s[i]);
     }
     return(0)
}
