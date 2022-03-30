/*
* File: 1-print_rev_recursion.c
* Author: mbt371
* Date: 30 march 2022
*/

#include "main.h"

/**
* _print_rev_recursion - write string using recusion in reverse.
* @s: char
* Return: void
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{

	}
}

