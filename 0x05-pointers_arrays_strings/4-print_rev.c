#include "main.h"

/**
 * print_rev -  function that prints a string, followed by a new line.
 * @s: pointer to a string
 * Return: void
 */
void print_rev(char *s)
{

int len = 0;
int i;

while (*s != '\0')
{
len++;
s++;
}

for (i = 0; i < len-1; i++)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
