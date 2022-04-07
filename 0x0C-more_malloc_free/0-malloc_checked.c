/*
* 0-malloc_checked.c - show the use of exit
* Author: mbt371
* Date: April 7, 2022
*/

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked - shows the basic use of exit
* @b: unsigned int
* Return: void pointer
*/

void *malloc_checked(unsigned int b)
{
/* void pointer */
void *p;

p = malloc(b);
	if (p == NULL)
	{
	/* memory allocation fails */
		exit(98);
	}

/* return the pointer */
return (p);
}

