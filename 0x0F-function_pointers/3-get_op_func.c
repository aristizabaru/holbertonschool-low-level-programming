#include "3-calc.h"

/**
 * get_op_func - selects propper math function
 * @s: operator
 *
 * Return: address of a function according to operand
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i = 0;

	/*look in structs content of first member for march*/
	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}
