#include "main.h"

/**
 *_strncpy - the funtion the copies a string
 *@dest: an input representation
 *@src: another input representation
 *@n: the last input representation
 *
 *Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
     int j;

     j=0;
     while(j<n&&src[j]!='\0')
     {
          dest[j]=src[j];
          j++;
     }
     while(j<n)
     {
          dest[j]='\0';
          j++;
     }

     return(dest);
}
