#include <stdio.h>

/**
 * main - main fun
 * Return: zero
 */

int main()
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0)
{
printf ("Fizz ");
continue;
}
else if (i % 5 == 0)
{
printf ("Buzz ");
continue;
}
printf ("%d ", i);
}
return (0);
}
