#include "main.h"

/**
 * print_rev -  function that prints a string, followed by a new line.
 * @s: pointer to a string
 * Return: void
 */
void print_rev(char *s)
{

int len = 0;

while (*s != '\0')
{
len++;
s++;
}
int i = 0;
for (i = 0; i < len; i++)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
