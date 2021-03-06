/*
* File: 4-pow_recursion.c
* Author: mbt371
* Date: 30 march 2022
*/

#include "main.h"

/**
* _pow_recursion - x to the power of y
* @x: int
* @y: int
* Return: int -1, or pow
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	/* special case end -1 */
	return (-1);
	}
	else if (y != 0)
	{
	return (x *= _pow_recursion(x, y - 1));
	}
	else
	{
	/* in case its 0 */
	return (1);
	}
}

