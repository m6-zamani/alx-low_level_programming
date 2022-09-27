#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 * pointe to by @c with the constant byte @c
 * @s: a pointer to the memory area to be filled.
 * @c: The character to fill the memory area with
 * @n: The number of bytes to be filled
 * description _memset: over there
 *
 * Return: A pointer to the filled memory area @c
 *
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
