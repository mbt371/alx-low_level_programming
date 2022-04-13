/*
* 0-print_name.c - Prints the given name
* Author: mbt371
* Date: April 13 2022
*/

#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - print given name
* @name : string
* @f: function
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

