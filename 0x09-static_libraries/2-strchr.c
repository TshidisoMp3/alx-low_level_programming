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
     int ic=0;
     for (;s[ic]>='\0';ic++)
     {
           if (s[ic]==c)
                   return(&s[ic]);
     }
     return(0);
}
