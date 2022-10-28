#include "main.h"

/**
 * binary_to_uint - Entry Point
 * @b: const char
 * Return: 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i;

	if(!b)
		return (0);
	for (i = 0, b[i]; i++)
	{
		if(b[i] < '0' || b[i] > '1')
			return (0);
		res = 2 * res + (b[i] - '0');
	}
	return (res);
}
