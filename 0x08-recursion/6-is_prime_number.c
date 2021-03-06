/*
* File: 6-is_prime_number.c
* Author: mbt371
* Date: 30 march 2022
*/

#include "main.h"

/**
* is_prime - validate if odd an mayor than 2.
* @a: num
* @b: num
* Return: prime
*/

int is_prime(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
	/* not prime if minor than 1 or 1 */
	/* not prime if even */
		return (0);
	}
	else if (a == b)
	{
	/* if 2 its prime */
	/* special case */
		return (1);
	}
	/* walk until find number given */
	return (is_prime(a, b + 1));
}


/**
* is_prime_number - ask is_prime to evaluate prime.
* @n: num
*
* Return: 1 or 0.
*/
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

