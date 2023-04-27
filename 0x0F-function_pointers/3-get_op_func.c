#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - ...
 * @s: ...
 *
 * Return: ...
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[s] = {
		{ "+", op_add },
		{ "-", op_sub },
		{ "*", op_mul },
		{ "/", op_div },
		{ "%", op mod },
		{ NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].0p) == 0)
			return (ops[i].f);
		i++;
	}

	return (0);
}
