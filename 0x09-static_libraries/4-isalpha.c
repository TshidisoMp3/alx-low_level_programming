#include "stdio.h"

/**
 * _isalpha - check alphabetic characterss
 * @c: character input by userss
 * Return: 1 if c is alphabet else 0.
 */

int _isalpha(int c)

{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
     return (1);
else
     return (0);
}
