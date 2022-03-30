/*
* File: 5-sqrt_recursion.c
* Author: mbt371
* Date: 30 march 2022
*/

#include "maiin.h"

/**
* is_sqrt - square of a number
* @a: int
* @b: int
* Return: int -1, or sqrt
*/

int is_sqrt(int a, int b)
{
	if (b * b == a)
	{
	/* its the number */
		return (b);
	}
	else if (b * b > a)
	{
	/* its not  */
		return (-1);
	}
	return (is_sqrt(a, b + 1));
}

/**
* _sqrt_recursion - ssqrt of number.
* @n: num
* Return: sqrt.
*/
int _sqrt_recursion(int n)
{
	return (is_sqrt(n, 0));
}

