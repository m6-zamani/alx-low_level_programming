#include "main.h"

/**
 * _pow_recursion - returns
 * @s: string
 * @y the power
 *
 * Return: 
 */
int _pow_recursion(int x, int y)
{
	if (y < 0 || x < 0)
	{
		return (-1);
	}

	else if (y == 0 || x == 0)
	{
		return (1);
	}
	return (0);
}
