#include "main.h"

/**
 *_strncpy - the funtion the copies a string
 *@dest: its an input representation
 *@src: its another input representation
 *@n: its the last input representation
 *
 *Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
     int jf;

     jf = 0;
     while(jf<n&&src[jf]!='\0')
     {
          dest[jf]=src[jf];
          jf++;
     }
     while(jf<n)
     {
          dest[jf]='\0';
          jf++;
     }

     return(dest);
}
