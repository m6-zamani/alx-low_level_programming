#include "main.h"

/**
 * _isalpha - function to check if c is a letter, lowwercase or uppercase
 * @c: is the int that will use for the ardument of the function
 * Return: 0
 */

int _isalpha(void)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}

