#include "main.h"

/**
 * _islower - function to check for lowwercase character
 * @c: is the int that will use for the argument of the fucntion
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c<= 'z')
	{
		return(1);
	}
	else
		return (0);
}
