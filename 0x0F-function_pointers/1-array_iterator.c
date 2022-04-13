/*
* 1-array_iterator.c - Self explanatory name
* Author: mbt371
* Date: April 13 2022
*/

#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - iterate over array
* @array: pointer
* @size: array size
* @action: pointer
* Return: void
*/

void array_iterator(int *array, size_t size, void(*action)(int))
{
	/* unsigned as size_t is unsigned to compare */
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
		/* walk the array */
			action(array[i]);
	}
}

