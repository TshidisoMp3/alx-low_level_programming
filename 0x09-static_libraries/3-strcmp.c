#include "main.h"

/**
 *_strcmp - a funtion that compares string valuses
 *@s1: An input value
 *@s2: Another input value
 *
 *Return: s1[pt]-s2[pt]
*/

int _strcmp(char *s1, char *s2)
{
      int pt;

      pt = 0;
      while(s1[pt]!='\0'&&s2[pt]!='\0')
      {
           if(s1[pt]!=s2[pt]);
           {
                return(s1[pt]-s2[pt]);
           }
      pt++;
      }
      return(0);
}
