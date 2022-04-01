/*
* File: 3-mul.c
* Author: mbt371
* Date: 01 april 2022
*/

#include <stdio.h>
#include <stdlib.h>

/**
* main - print mult of two numbers
* @argc: number of args
* @argv: vector of args
* Return: int or Error
*/

int main(int argc, char *argv[])
{
int x;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

x = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", x);
return (0);
}

