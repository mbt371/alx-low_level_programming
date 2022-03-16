#include <stdio.h>
#include <stdlib.h>
int main(void)
{
double a = 0;
double b = 1;
double sum = 0;
double f;
int i, pair;

for (i = 0; i < 32; i++)
{
f = a + b;
pair = f;
if (pair % 2 == 0)
sum = sum + f;
a = b;
b = f;
}
printf("%.f\n", sum);
return (0);
}
