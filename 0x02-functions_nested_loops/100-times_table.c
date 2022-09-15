#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n = 15, i;

	for (i = 0; i <= n; ++i)
	{
		printf("%d * %d = %d \n", n, i, n * i);
	}

	return (0);
}
