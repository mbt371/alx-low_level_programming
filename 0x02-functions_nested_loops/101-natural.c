#include <stdio.h>
int main(void)
{
int counter = 2;
int a = 1;
int b = a + 1;
int c = a + b;

printf("%1d, %1d, ", a, b);
while (counter < 50)
{
printf("%1d", c);
counter++;
a = b;
b = c;
c = a + b;
if (counter < 50)
{
printf(", ");
}
}
printf("\n");
return (0);
}
