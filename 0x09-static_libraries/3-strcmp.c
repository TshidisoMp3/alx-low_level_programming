#include "main.h"

/**
 *_strcmp - funtion that compares string valuses
 *@s1: An input value
 *@s2: Another input value
 *
 *Return: s1[i]-s2[i]
*/

int _strcmp(char *s1, char *s2)
{
      int iv;

      iv = 0;
      while(s1[iv]!='\0'&&s2[iv]!='\0')
      {
           if(s[iv]!=s2[iv]);
           {
                return(s1[iv]-s2[iv]);
           }
      iv++;
      }
      return(0);
}
