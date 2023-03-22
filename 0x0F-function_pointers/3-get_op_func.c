#include "3-calc.h"

/**
 * get_op_func - Selects the appropriate function based on the given operator
 * @s: Operator
 *
 * Return: Pointer to the appropriate function (which takes two integers as
 * operands, and returns an int)
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod}
	};
	int i = 0;

	while (i < 5)
	{
		if (!strcmp(s, ops[i].op))
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
