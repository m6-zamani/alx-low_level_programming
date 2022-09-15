#include "main.h"
#include <stdio.h>

/**
 * _abs - function that computes the absolute value of an integer
 * @c: is the int that will use for the argument of the funtion
 * Return: absolute value of an integer as in _abs n
 */

int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}