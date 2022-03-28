/*
* File: 2-strchr.c
* Author: mbt371
* Date: Monday 28 march 2022
*/

#include "main.h"

/**
* _strchr - Find character in string.
* @s: char
* @c: char
* Return: the pointer to first find or NULL
*/

char *_strchr(char *s, char c)
{
	do {
	/* walk the string */
		if (*s == c)
		{
			break;
		}
	} while (*s++);

return (s);
}

