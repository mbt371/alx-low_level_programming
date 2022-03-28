/*
* File: 7-print_chessboard.c
* Author: mbt371
* Date: Monday 28 march 2022
*/

#include "main.h"

/**
* print_chessboard - print a chessboard
* @a:array
* Return:void
*/

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; a[i][7]; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
	_putchar('\n');
	}
}
