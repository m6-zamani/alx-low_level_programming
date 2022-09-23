#include "main.h"

/**
 * strcat - concatenates the string pointed to be @src, including the terminal null byte, too the end of the string pointed 
 * @dest: 
 * @src:
 *
 *Return: & pointer to the destintion string @dest
 */
char *strcat(char *dest, const char *src)
{
	int index = 0, destl_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
