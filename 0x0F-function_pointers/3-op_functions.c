#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - operates addition
 * @a: first number
 * @b: second number
 * Return: result (int)
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - operates substraction
 * @a: first number
 * @b: second number
 * Return: result (int)
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - operates multiplication
 * @a: first number
 * @b: second number
 * Return: result (int)
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - operates division
 * @a: first number
 * @b: second number
 * Return: result (int)
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - operates modulo
 * @a: first number
 * @b: second number
 * Return: result (int)
 */

int op_mod(int a, int b)
{
	return (a % b);
}
