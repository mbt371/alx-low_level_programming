/*
* File: 4-strpbrk.c
* Author: mbt371
* Date: Monday 28 march 2022
*/

#include "main.h"

/**
* _strpbrk - Searches a string.
* @s: char
* @accept: char
* Return: a pointer
*/

char *_strpbrk(char *s, char *accept)
{
int i;

	while (*s)
	/* walk the string */
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
			/* ends here */
				return (s);
			}
		}
	s++;
	}
/* returns NULL */
return ('\0');
}
