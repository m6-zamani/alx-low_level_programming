#include "main.h"

/**
 * _strlen - count array
 * @s: array of elements
 * Return: 1
 */
int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0') /*count caharacter of string*/
	{
		i++;
	}

	return (i);
}

	/**
	 * _strcpy - function returns a pointer to new string which is duplicate
	 *
	 * Description: 'function returns a pointer to new string which is duplicate'
	 * @src: array of elements
	 * @dest: dest array
	 * Return: dest
	 */
	char *_strcpy(char *dest, char *src) /*_strcpy - copy arrays*/
	{
		int i = 0;

		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';

		return (dest);
	}

	/**
	 * _strdup - array for prints a string
	 * @str: array of elements
	 * Return: pointer
	 */
	char *_strdup(char *str) /*_strdup - string to duplicate*/
	{
		char *dst;
		unsigned int size;

		if (str == 0)
		{
			return (NULL);
		}

		size = _strlen(str) + 1;

		dst = (char *) malloc(size * sizeof(char));

		if (dst == 0)
		{
			return (NULL);
		}
		_strcpy(dst, str);
		return (dst);
	}
