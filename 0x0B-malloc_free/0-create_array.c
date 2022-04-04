/*
* 0-create_array.c - exercise to try malloc
* Author: mbt371
* Date: 4 April 2022
*/

#include "main.h"
#include <stdlib.h>

/**
* create_array - Creates an array
* @size: size of array
* @c: character
* Return: NULL or a pointer
*/


char *create_array(unsigned int size, char c)
{
unsigned int i;
char *x;
/*get the size of char */
x = malloc(size * sizeof(char));

	/* case size 0 */
	if (size == 0)
	{
	return (NULL);
	}

	/* case x  NULL */
	if (x == NULL)
	{
		return (NULL);
	}
	/* create the array */
	for (i = 0; i < size; i++)
	{
		x[i] = c;
	}
return (x);
}

