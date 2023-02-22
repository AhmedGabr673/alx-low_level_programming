#include "main.h"

/**
 * jack_bauer - check
 */

void jack_bauer(void)
{
int min = 0;
int hours = 0;
while (hours < 24)
{
while (min < 60)
{
if (hours < 10)
{
_putchar ('0' + hours);
}
else
{
_putchar (hours);    
}
_putchar(':');
if (min < 10)
{
_putchar ('0' + min);
}
else
{
_putchar (min);    
}
min++;
}
}
hours++;
}

