#include "3-calc.h"

/**
 * get_op_func - selects coreect function to perform operation
 * asked by the user
 * @s: the choice of operation picked by the user
 *
 * Return:: a pointer to the appropriate function
 */

int (*get_op_func(char *s))(int, int)
{

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int h = 0;

	while (h < 10)
	{
		if (s[0] == ops->op[h])
			break;
		h++;
	}

	return (ops[h / 2].f);
}
