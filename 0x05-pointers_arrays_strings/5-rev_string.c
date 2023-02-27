// #include "main.h"

// /**
//  * rev_string -  function that prints a string, followed by a new line.
//  * @s: pointer to a string
//  * Return: void
//  */
// void rev_string(char *s)
// {

// int len = 0;
// int i = 0;
// int j = 0;
// char temp;

// while (*s != '\0')
// {
// len++;
// s++;
// }

// j=len-1;
// while (i < j)
// {
// temp = s[i];
// s[i] = s[j];
// s[j] = temp;
// i++;
// j--;
// }
// }

#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int i = 0;
	int j = (_strlen(s) - 1);
	char tmp;

	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++, j--;
	}
}