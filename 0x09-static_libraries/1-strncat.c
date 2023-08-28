#include "main.h"

/**
 *_strncat - the fuction concatenates two strings
 *@dest: the input value
 *@src: another input value
 *@n: anther input value
 *
 *Return: dest
*/

char *_strncat(char *dest, char *src, int n)

{
     int ik;
     int jp;

      ik = 0;
      while (dest[ik]!='\0')
      {
            ik++;
      }
      jp = 0;
      while (jp<n&&src[jp]!='\0')
      {
            dest[ik]=src[jp];
            ik++;
            jp++;
      }
      dest[ik]='\0';
      return(dest);
}
