#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0
 */
int print_times_table(int n);

int i, k;

int main(void)
{
	print_times_table(15);
	
	return (0);
}

int print_times_table(int n)
{
	for (i = 0; i <= n; ++i) 
	{
		k = n * i;
		printf("%d\n", k); 
	}
	return (0);
}

