#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - the function pointers
 *
 * @s: the operators passed as arguments
 *
 * Return: pointer to function, fails otherwise.
 */

int (*get_op_func(char *s))(int num1, int num2)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int tip = 0;

	while (ops[tip].op)
	{
		if (*s == *(ops[tip].op) && *(s + 1) == '\0')
			return (ops[tip].f);
		++tip;
	}

return (NULL);
}
