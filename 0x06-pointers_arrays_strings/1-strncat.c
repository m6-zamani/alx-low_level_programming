#include "main.h"
#include <string.h>

/**
 * strcat - Concatenates the tsring pointed to by @srx, including th terminate nullbyte, to the end of the string pointed to by @dest
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strncat(char *dest, char *src, int n);
{
	strncat(dest, src, n);
	return (dest);
}
