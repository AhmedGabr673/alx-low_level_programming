#include "main.h"

/**
 * _abs - checks for lowercase character
 * @x: int to check
 * Return: 1 if lowercase, 0 if uppercase
 */

int _abs(int x)
{
	if (x > 0)
		return (x);
	else if (x < 0)
		return (-x);

	return (0);
}

