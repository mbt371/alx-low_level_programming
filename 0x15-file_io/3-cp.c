/*
* 3-cp.c - COPY file
* Author: mbt371
* Date: May 02, 2022
*/

#include "main.h"

#define rze STDERR_FILENO

/**
* main - copy the content and perms of a file
* @anum: the name of teh file
* @aval: The text
* Return: 0 if ok
* 97 if arg number is wrong
* 98 if file to copy from does not exist
* 99 if copy file can not be created
* 100 if cant close
*/

int main(int anum, char **aval)
{
char buffer[1024];
int filefrom, fileto, readfrom, writeto, canclose;

	if (anum != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	filefrom = open(aval[1], O_RDONLY);
	if (filefrom == -1)
		dprintf(rze, "Error: Can't read from file %s\n", aval[1]), exit(98);

	fileto = open(aval[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fileto == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", aval[2]), exit(99);

	readfrom = read(filefrom, buffer, 1024);
	if (readfrom == -1)
		dprintf(rze, "Error: Can't read from file %s\n", aval[1]), exit(98);

	while (readfrom > 0)
	{
		writeto = write(fileto, buffer, readfrom);
		if (writeto == -1)
			dprintf(rze, "Error: Can't write to %s\n", aval[2]), exit(99);
		readfrom = read(filefrom, buffer, 1024);
		if (readfrom == -1)
			dprintf(rze, "Error: Can't read from file %s\n", aval[1]), exit(98);
	}
	canclose = close(filefrom);
	if (canclose == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filefrom), exit(100);

	canclose = close(fileto);
	if (canclose == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileto), exit(100);

return (0);
}



