#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - pointer to funtion to be executed
 * @s: name of function
 * @int: int to carry out function on
 * Return: int
 */

int (*get_op_func(char *s))(int, int)
{

	return (get_op_fun(s));

}
