#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - fn that adds two int
 * @a: int to be added
 * @b: int to be added
 * Return: int(a + b)
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - fn that subtracted two int
 * @a: int to be subtracted
 * @b: int to be subtracted
 * Return: int(a - b)
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - fn that multiplies two int
 * @a: int to be multiplied
 * @b: int to be multiplied
 * Return: int(a * b)
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - fn that divides two int
 * @a: int to be divided
 * @b: int to be divided
 * Return: int(a / b)
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - fn that finds remainder of dividing two int
 * @a: int to find modulos
 * @b: int to find modulos
 * Return: int(a % b)
 */

int op_mod(int a, int b)
{
	return (a % b);
}
