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
int j;
char temp;

while (*s != '\0')
{
len++;
s++;
}

j=len-1;
while (i != j)
{
s[i] = temp;
s[i] = s[j];
s[j]= temp;
i++;
j--;
}
}
