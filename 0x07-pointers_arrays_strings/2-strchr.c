/*
* File: 2-strchr.c
* Author: Rodrigo Zárate Algecira
* Date: Monday 06 july 2021
*/

#include "holberton.h"

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
[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[C[C[C[C[B[C[C[C[C[C[Cmbt371[3~[3~[3~[3~[3~[3~[3~[3~[3~[3~[3~[3~[3~ [3~[3~[3[B[C[C[C[C[C[C[C[C[C[C[2[D[D[D[march[D[D[D[D[D[C[C[C[C[C [D[D[D[D[D[D28[B[B[Bmain.h[C[C[C[C"[B[B[B[B[B[B[B[B[B[B[B[B[B[B[