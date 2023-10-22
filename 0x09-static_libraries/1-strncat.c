#include "main.h"

/**
 *_strncat - the fuction concatenates two strings
 *@dest: the input value
 *@src: another input value
 *@n: anther input value
 *
 *Return: dest
*/

char *_strncat(char *dest, char *src, int n);
{
     int i;
     int j;

      i = 0;
      while (dest[i]!='\0')
      {
            i++;
      }
      j = 0;
      while (j<n&&src[]!='\0')
      {
            dest[i]=src[j];
            i++;
            j++;
      }
      dest[i]='\0'
      return(dest);
}
