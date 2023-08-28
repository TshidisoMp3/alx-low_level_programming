#include "main.h"

/**
 *_strcat- it has the concatenates 2 strings
 *@dest: it  inputs the value
 *@src: another input value
 *Return: void
*/

char *_strcpy(char *dest, char *src)
{
     int ik;
     int jp;

     ik=0;
     while(dest[ik]!='\0')
     {
           ik++;  
     }

     jp=0;
     while(src[jp]!='\0')
     {
            dest[ik] = src[jp];
            ik++;
            jp++;
     }
     dest[ik]='\0';
     return(dest);
}
