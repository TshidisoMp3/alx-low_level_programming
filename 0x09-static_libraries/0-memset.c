#include "main.h"

/**
 *_memset - filling a block set witha specific value
 *@s: the starting address of the memory to be filled
 *@b: the expected value
 *@n: the number of bytes to be changed
 *
 *Return: the changed array with the value of n bytes
 */

char*_memset(char*s, char b, unsigned int n)
{
   int i = 0;
   
   for(;n>0;i++)
   {
         s[1]=b;
         n--;
   }
   return(s);
}
