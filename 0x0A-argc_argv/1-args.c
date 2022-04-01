/*
* File: 1-args.c
* Author: mbt371
* Date: 01 april 2022
*/

#include <stdio.h>

/**
* main - print args
* @argc: number of args
* @argv: vector of args
* Return: int
*/

int main(int argc, char *argv[])
{
	if (argv[0])
	printf("%d\n", argc - 1);
return (0);
}

