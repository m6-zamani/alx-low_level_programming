#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0
 */

int main(void)
{
	print_times_table(15);
	
	return (0);
}

void print_times_table(int n)
{
	int i;
	for (i = 0; i <= n; ++i) 
	{
		printf("%d * %d = %d \n", n, i, n * i); 
	}
}

