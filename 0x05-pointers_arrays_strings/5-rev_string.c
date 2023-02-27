#include "main.h"

/**
 * rev_string -  function that prints a string, followed by a new line.
 * @s: pointer to a string
 * Return: void
 */
void rev_string(char *s)
{
int len = 0;
int i;
char *tempString;
while (*s != '\0')
{
len++;
s++;
}
s--;
for (i = 0; i < len/2; i++)
{
*tempString = *s;
s--;
tempString++;
}
s = tempString;
}