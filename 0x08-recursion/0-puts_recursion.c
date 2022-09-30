#include "main.h"

/**
 * _puts_recussion prints a string followed by a new line
 * @s: \The string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchr(*s);
		_puts_recrsion(s + 1);
	}

	else
		_putchar('\n');
}
