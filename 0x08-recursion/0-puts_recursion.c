/*
* File: 0-puts_recursion.c
* Author: mbt371
* Date: 30 march 2022
*/

#include "main.h"

/**
* _puts_recursion - write string using recusion.
* @s: char
* Return: void
*/

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}

