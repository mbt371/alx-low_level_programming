#include <stdio.h>
/**
* main - prints letters in reverse lower case
* Return: Always (Success)
*/
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		printf("%c", i);
	}
		printf('\n');
	return (0);
}
