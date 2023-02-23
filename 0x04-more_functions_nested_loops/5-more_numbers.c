#include "main.h"

/**
 * more_numbers - print 1 to 14 10 times
 * Return: void
 */

void more_numbers(void)
{
int n = 0;
int count = 0;
for (count = 0; count < 10; count++)
{
for (n = 0; n <= 14; n++)
{
_putchar (n);
}
_putchar ('\n');
}
}
