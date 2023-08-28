#include "main.h"

/**
 *_memcpy - a function that has the ability to copy a memory area
 *@dest: were the memory is going to be stored
 *@src: were the memory is going to be  copied
 *@n: number of bytes
 *
 *Return: copied memory with n bytes executed
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
     int rt=0;
     

     for(rt = 0; rt < n; rt++)
     {
           dest[rt]=src[rt];
           n--;
     }
     return (dest);
}
