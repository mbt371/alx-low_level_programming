#include <stdio.h>
/**
* main - prints letters in reverse lower case
* Return: Always (Success)
*/
int main(void)

{
char i;

for (i = 122; i >= 97; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
