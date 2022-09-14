#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @n: is the int that will use for the argument of the funtion
 * Return: 0
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
